# -*- coding: utf-8 -*-
# @Time : 2021/1/4 21:02
# @Author : Fly
# @Email :
# @File : utils.py
# @Project : 雨课堂


import requests
import json
import re


class Utils:
    def __init__(self, session=None, token=None, host=None, examHost=''):
        self.session = session
        self.token = token
        self.host = host
        if len(examHost) is not 0:
            self.examHost = examHost[0]
        else:
            self.examHost = ''
        self.options = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
        self.judge = ['true', 'false']
        self.check_on_course_url_v2 = 'https://' + self.host + '/v/course_meta/on_lesson_courses'
        self.check_on_course_url_v3 = 'https://' + self.host + '/api/v3/classroom/on-lesson'
        self.lesson_info_url = 'https://' + self.host + '/v/lesson/lesson_info_v2?lesson_id='
        self.onlineAnswerUrl = 'https://' + self.host + '/v/lesson/problem_result_detail/'
        self.examAnswerUrl = 'http://api.3xittec.cn/api/v4/examination/'
        self.goToClassUrl = 'https://' + self.host + '/v/lesson/lesson_info_entry/'
        self.attendClassUrl = 'https://' + self.host + '/lesson/fullscreen/7240345?source=5'
        self.newExamProblemUrl = 'https://' + self.examHost + '/exam_room/show_paper?exam_id='
        self.resultUrl = 'https://' + self.examHost + '/result/'
        self.classroomIdUrl = 'https://' + self.host + '/v2/api/web/courses/list?identity=1'
        self.pptDetailUrl = 'https://' + self.host + '/v/cards/learning_cards_detail/'
        self.pptAnsurl = 'http://api.3xittec.cn/api/v4/ppt/'
        self.headers = {
            'sec - fetch - dest': 'empty',
            'sec - fetch - mode': 'cors',
            'sec - fetch - site': 'same - origin',
            'user-agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_4) AppleWebKit/537.36 (KHTML, like Gecko) '
                          'Chrome/81.0.4044.92 Safari/537.36 Edg/81.0.416.53',
            'university-id': '0',
            'xt-agent': 'web',
            'xtbz': 'ykt',
            'cookie': 'sessionid=' + self.session
        }
        self.answerHeader = {'content-type': "application/json"}

    def checkOncourse(self):

        check_on_course_v2 = requests.get(url=self.check_on_course_url_v2, headers=self.headers)
        check_on_course_v3 = requests.get(url=self.check_on_course_url_v3, headers=self.headers)
        js_onlesson_v2 = check_on_course_v2.json()['data']['on_lessons']
        js_onlesson_v3 = check_on_course_v3.json()['data']['onLessonClassrooms']
        courseInfo = list(filter(lambda x: x != [], [js_onlesson_v2, js_onlesson_v3]))
        oncourseNum = len(courseInfo)

        if oncourseNum is 0:
            return False
        oncourse: dict = courseInfo[0][0]
        if oncourse.get('lessonId'):
            course_info = {'lesson_name': oncourse.get('courseName'),
                           'version': 3,
                           'attendUrl': 'https://{}/lesson/fullscreen/v3/{}?source=5',
                           'lesson_id': oncourse.get('lessonId')}
        else:
            course_info = {'lesson_name': oncourse['classroom']['name'],
                           'version': 2,
                           'attendUrl': 'https://{}/lesson/fullscreen/{}?source=5',
                           'lesson_id': oncourse.get('lesson_id')}
        return course_info

    def getOnlineProblem(self, lessonId):
        lessonData = requests.get(url=self.lesson_info_url + lessonId, headers=self.headers)
        jsonData = lessonData.json()
        problemList = jsonData['data']['problemList']
        list = []
        for item in problemList:
            problemInfo = {
                'id': item['ProblemID'],
                'index': item['index']
            }
            list.append(problemInfo)

        return list

    def getOnlineAnswer(self, problemList):
        """
        v2版直播课堂推送答案获取
        :param problemList: 题目ID列表
        :return:
        """
        answerList = []
        for item in problemList:
            id = str(item['id'])
            data = requests.get(url=self.onlineAnswerUrl + id, headers=self.headers)
            jsonAnswer = data.json()
            answer = jsonAnswer['answer']
            answerList.append(answer)

        return answerList

    def checkClassinfo(self):
        dataInfo = requests.get(url=self.classroomIdUrl, headers=self.headers).json()
        classIdlist = dataInfo["data"]["list"]
        if len(classIdlist):
            classId = classIdlist[0]['classrooms'][0]['id']
            return {"Flag": True, "Id": classId}
        else:
            return {"Flag": False, "Id": []}

    def newExamProblem(self, examid):
        """
        获取新版试卷答案
        :param examid: 试卷ID
        :return:
        """
        problemList = []
        paper = []
        headers2 = {
            'referer': self.resultUrl + examid + '?isFrom=1',
            'user-agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.92 Safari/537.36 Edg/81.0.416.53',
            'xt-client': 'web',
            'xtbz': 'cloud',
            'cookie': 'x_access_token=' + self.token
        }
        paperData = requests.get(url=self.newExamProblemUrl + examid, headers=headers2)
        jsonData = paperData.json()
        problemId = jsonData['data']['problems']
        for item in problemId:
            Type = item['Type']
            if Type == 'ShortAnswer':
                problemList.append(item['problem_id'])
                paper.append({Type: ''})
            elif Type == 'FillBlank':
                problemList.append(item['problem_id'])
                paper.append({Type: ''})
            else:
                single = []
                problemList.append(item['problem_id'])
                for option in item['Options']:
                    single.append(option['key'])
                paper.append({Type: single})
        finals = []
        classInfo = self.checkClassinfo()
        if not classInfo['Flag']:
            finals.append('您暂没有创建班级，无法获取参数，请按照说明书创建班级后再试')
            return finals
        classroomId = classInfo['Id']

        data = {
            'host': self.host,
            'classroom_id': classroomId,
            'sessionId': self.session,
            'exam': {'problem_id': problemList, 'type': 5, 'examId': str(examid)}
        }
        js_data = json.dumps(data)
        answerReq = requests.post(url=self.examAnswerUrl, data=js_data, headers=self.answerHeader).json()
        answers = answerReq['answer']
        if answers is None:
            finals.append('此试卷为抽随机抽题试卷，无法作答')
            return finals
        for i, li in enumerate(problemList):
            for x, dic in enumerate(answers):
                for k, v in dic.items():
                    if li == int(k):
                        answers.pop(x)
                        answers.append({li: v})

        for i, answer in enumerate(paper):
            final = next(x[1] for x in answers[i].items())
            for k, v in answer.items():
                if k == 'SingleChoice' or k == 'MultipleChoice':
                    pattern = re.compile('([A-Z]*)')
                    search = re.search(pattern, final).group(1)

                    if len(search) > 1:
                        end = ''
                        for index in search:
                            if index in v:
                                end += self.options[v.index(index)] + ' '
                        finals.append(end)
                    else:
                        # if v[0] in current:
                        finals.append(self.options[v.index(search)])
                elif k == 'Judgement' or k == 'FillBlank':
                    finals.append(final)
                else:
                    finals.append('此题是主观题无答案')

        return finals

    def oldExamAns(self, examid):
        """
        旧版试卷答案获取
        :param examid: 试卷ID
        :return:
        """
        classInfo = self.checkClassinfo()
        if not classInfo['Flag']:
            return ['您暂没有创建班级，无法获取参数，请按照说明书创建班级后再试']
        classroomId = classInfo['Id']
        data = {
            'host': self.host,
            'classroom_id': classroomId,
            'sessionId': self.session,
            'exam': {'examId': str(examid), 'type': 4}
        }
        js_data = json.dumps(data)
        answerReq = requests.post(url=self.examAnswerUrl, data=js_data, headers=self.answerHeader).json()
        print(answerReq)
        answers = answerReq['answer']
        return answers

    def ppt(self, cardId):
        """
        课件PPT答案获取
        :param cardId: 课件ID
        :return:
        """
        pptInfo = requests.get(url=self.pptDetailUrl + str(cardId) + '/', headers=self.headers).json()
        if pptInfo['data']['problems']:
            problems = pptInfo['data']['problems']
            pageList = [index['page_index'] for index in problems]
            uploadData = {
                'host': self.host,
                'cardId': cardId,
                'sessionId': self.session,
                'pageList': pageList
            }

            js_data = json.dumps(uploadData)
            print(js_data)
            answerReq = requests.post(url=self.pptAnsurl, data=js_data, headers=self.answerHeader).json()
            answer = answerReq['answer']
            return answer
        else:
            return [False, '本PPT无练习题']
