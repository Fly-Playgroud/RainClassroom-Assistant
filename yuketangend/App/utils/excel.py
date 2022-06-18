import xlrd
import re


class AnswerApi():

    def __init__(self, name):
        self.excelBook = xlrd.open_workbook(name)
        self.sheet = self.excelBook.sheet_by_index(0)

    def oldAns(self):
        """
        试卷API接口
        :param fliName:
        :return: 返回试卷答案字典
        """
        data = self.sheet.row_values(1, 5)
        answerList = []
        pattern = re.compile(pattern=r'([A-Z]+)|主观题|正确答案:(\S+)')
        for answer in data:
            reInfo = re.search(pattern=pattern, string=answer)
            if reInfo:
                if '正确答案:' not in reInfo.group(0):
                    answerList.append(reInfo.group(0))
                else:
                    answerList.append(reInfo.group(0).split('正确答案:')[1])
        return answerList

