import os

import requests
import json
import time
import re
from bs4 import BeautifulSoup as bs
from App.utils.excel import AnswerApi


def getExcel(paramsDict):
    taskUrl = 'https://' + paramsDict['host'] + '/v/course_meta/generate_data_export/'
    data = {"classroom_id": paramsDict['classroom_id'],
            "export_info_list": [
                {"courseware_id": paramsDict['exam']['examId'], "courseware_type": paramsDict['exam']['type']}]}
    jsData = json.dumps(data)
    print(jsData)
    headers = {
        'cookie': 'sessionid=' + paramsDict['sessionId'],
    }
    req = requests.post(url=taskUrl, data=jsData, headers=headers)
    if req.status_code == 200:
        taskInfo = req.json()
        print(taskInfo)
        taskId = taskInfo['data']['export_task_id']
        time.sleep(2)
        taskUrl = 'https://' + paramsDict['host'] + '/v/course_meta/query_export_task_state/' + str(taskId) + '/'
        messReq = requests.get(url=taskUrl, headers=headers).json()
        execUrl = messReq['data']['download_url']
        excel = requests.get(url=execUrl, headers=headers)
        name = 'App/temp/' + str(time.time()) + str(taskId) + '.xlsx'
        with open(name, 'wb') as f:
            f.write(excel.content)
        return name, paramsDict['exam']['type']


def getAnswer(paramsDict):
    excelInfo = getExcel(paramsDict)
    Type = excelInfo[1]
    name = excelInfo[0]

    api = AnswerApi(name)
    data = api.oldAns()
    # os.remove(name)
    print(data)
    if Type is not 5:
        return data
    else:
        problemList = paramsDict['exam']['problem_id']
        problemList.sort()
        print(len(problemList), len(data))
        if len(problemList) == len(data):
            info = [{answer[0]: answer[1]} for answer in zip(problemList, data)]

            return info


def ppt_answer(paramDict):
    pptAnswerUrl = 'https://{}/cards/cards_info/{}/'.format(paramDict['host'], paramDict['cardId'])
    headers = {
        'cookie': 'sessionid=' + paramDict['sessionId'],
    }

    answerReq = requests.get(url=pptAnswerUrl, headers=headers).text
    data = bs(answerReq, 'lxml').script.string
    subData = re.sub(r'\s', '', data)
    cardData = re.search('cardData=(.*})', subData)
    answerData = cardData.group(1)
    jsonData = json.loads(answerData)['Slides']
    answerList = []
    for index in paramDict['pageList']:
        try:
            answerList.append(
                {str(index): jsonData[index - 1]['Problem']['Answer']})
        except KeyError:
            answerList.append({str(index): '主观题无答案'})
    return [True, answerList]


