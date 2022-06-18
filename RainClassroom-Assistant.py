import base64, time, msvcrt
import requests, json, re
import urllib, threading, websocket
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_v1_5 as Cipher_pkcs1_v1_5
from http import cookiejar


class Ykt():
    def __init__(self, name, pwd):
        self.headers = {
            'Host': 'www.yuketang.cn',
            'Connection': 'keep-alive',
            'Content-Length': 'length',
            'Accept': 'application/json',
            'X-CSRFToken': 'iEkliLKSg6M4i176wFVEDf0LMtVU3JyK',
            'X-Requested-With': 'XMLHttpRequest',
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.129 Safari/537.36 Edg/81.0.416.68',
            'Content-Type': 'application/x-www-form-urlencoded',
            'Origin': 'https://www.yuketang.cn',
            'Sec-Fetch-Site': 'same-origin',
            'Sec-Fetch-Mode': 'cors',
            'Sec-Fetch-Dest': 'empty',
            'Referer': 'https://www.yuketang.cn/web?index',
            'Accept-Encoding': 'gzip, deflate, br',
            'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,en-GB;q=0.7,en-US;q=0.6',
            'Cookie': '_ga=GA1.2.232349948.1586848772; csrftoken=iEkliLKSg6M4i176wFVEDf0LMtVU3JyK'
        }

        self.headers2 = {
            'user-agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.92 Safari/537.36 Edg/81.0.416.53',
            'university-id': '0',
            'xt-agent': 'web',
            'xtbz': 'ykt',

        }
        self.session = requests.session()
        self.session.cookies = cookiejar.LWPCookieJar(filename='./cookie.txt')
        self.name = name
        self.pwd = pwd
        # self.classroom_id = classroom_id
        self.email_login_url = 'https://www.yuketang.cn/pc/login/verify_pwd_login/'
        self.check_on_course_url = 'https://www.yuketang.cn/v/course_meta/on_lesson_courses'
        self.lesson_info_url = 'https://www.yuketang.cn/v/lesson/lesson_info_v2?lesson_id='
        self.answer_url = 'https://www.yuketang.cn/v/lesson/problem_result_detail/'
        self.user_info_url = 'https://www.yuketang.cn/v2/api/web/userinfo'
        self.course_list_url = 'https://www.yuketang.cn/v2/api/web/courses/list?identity=2'
        self.exam_url = 'https://www.yuketang.cn/v2/api/web/logs/learn/'
        self.exam_answer_url = 'https://www.3xittec.cn/yuketang2/e.php?'
        self.goto_class_url = 'https://www.yuketang.cn/v/lesson/lesson_info_entry/'

    def crack_pwd(self):
        key = "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCQBaPX7crEH6/jS4hRD7lZrsFRIdfwEhH30onFnrnWxiRATzP9WEneXJEZHopmzudkNS5bDp51SCnBUGGgfL/sUUrlrhV2xnTSe1jRl924ejV5rkVkiii85jp9G8eJrJN6klHs0PfYfp4EVJ8688qpi5iETtg+q4ITocyEyD1+7wIDAQAB\n-----END PUBLIC KEY-----"  # 注意上述key的格式
        rsakey = RSA.importKey(key)
        cipher = Cipher_pkcs1_v1_5.new(rsakey)  # 生成对象
        cipher_text = base64.b64encode(cipher.encrypt(self.pwd.encode(encoding="utf-8")))  # 对传递进来的用户名或密码字符串加密
        value = cipher_text.decode('utf8')  # 将加密获取到的bytes类型密文解码成str类型
        return value

    def login(self, load_cookies: bool = True):
        """Email登录"""
        if load_cookies and self.load_cookies():
            print("检查登录信息中")
            if self.check_login():
                print("登录成功")
                return True
            print('登录信息已过期')
        self._check_user_pass()

        data = {
            'type': 'E',
            'name': self.name,
            'pwd': self.crack_pwd()
        }
        length = len(data)
        js_data = json.dumps(data)
        r = self.session.post(url=self.email_login_url, data=js_data, headers=self.headers)
        status = r.json()
        # if status['success'] == True:
        # print('登录成功')
        if self.check_login():
            print('登录成功')
            return True
        print('登录失败')
        return False

    def load_cookies(self):
        """
        读取cookies文件加载到session
        :return:bool
        """
        try:
            self.session.cookies.load(ignore_discard=True)
            return True
        except FileNotFoundError:
            return False

    def check_login(self):
        """
        检查登录状态，访问登录页面出现跳转则是已经登录，
        如登录成功保存当前cookies
        :return: bool
        """
        login_url = 'https://www.yuketang.cn/v2/api/web/userinfo'
        resp = self.session.get(login_url, allow_redirects=False)
        if resp.status_code == 200:
            self.session.cookies.save()
            return True
        return False

    def _check_user_pass(self):
        """
        检查用户名和密码是否已输入，若无则手动输入
        """
        if not self.name:
            self.name = input('请输入正确的邮箱：')
        if not self.pwd:
            self.pwd = input('请输入密码：')

    def authorization(self):
        """授权信息"""
        authorization_status = True
        def_user_id = 6647584
        message_list = []
        user_info = self.session.get(url=self.user_info_url, headers=self.headers2)
        js_user_info = user_info.json()
        if js_user_info['data'][0]['user_id'] != def_user_id:
            messager = '对不起!\n姓名：' + js_user_info['data'][0]['name'] + ' 学号：' + str(
                js_user_info['data'][0]['school_number']) + ' 授权ID：' + str(
                js_user_info['data'][0]['user_id']) + '\n 暂未获得授权，请联系QQ：1252811289 授权,谢谢！'
            authorization_status = False
            message_list = [messager, authorization_status]
        else:
            messager = ''
            authorization_status = ''
            message_list = [messager, authorization_status]
        return message_list

    def get_course_list(self):
        """
        获取所有课程

        """
        # message_list = []
        original_course_list = self.session.get(url=self.course_list_url, headers=self.headers2)
        js_original_course_list = original_course_list.json()
        first_course_list = js_original_course_list['data']['list']
        for course in first_course_list:
            print('课程名称：' + course['course']['name'] + ' 班级号：' + str(course['classroom_id']))

    def get_course_exams(self, classroom_id):
        """
        获取课程的考试
        """
        # message_list = []
        original_exam_list = self.session.get(
            url=self.exam_url + str(classroom_id) + '?actype=4&prev_id=-1&offset=99999&sort=-1', headers=self.headers2)
        js_original_exam_list = original_exam_list.json()
        first_exam_list = js_original_exam_list['data']['activities']
        for exam in first_exam_list:
            print('试卷名称：' + exam['title'] + ' 试卷号：' + str(exam['courseware_id']))

    def _process_cookie(self):
        cookie_dict = {}
        with open('./cookie.txt', 'r') as f:
            info_list = f.read()
            # js_info_list = json.loads(info_list)
            # print(info_list)
            csrf = re.search('^#LWP-Cookies-2.0.*?csrftoken=(.*?); path="/";.*?Set-Cookie3:.*?httponly=None; version=0',
                             info_list, re.S)
            sessionid = re.search(
                '^#LWP-Cookies-2.0.*?path="/".*?sessionid=(.*?); path="/";.*?httponly=None; version=0', info_list, re.S)
            cookie_dict = {
                'csrf': csrf.group(1),
                'sessionid': sessionid.group(1)
            }
        return cookie_dict

    def get_exam_answer(self, quizid, classid):
        params = {
            'quizid': quizid,
            'csrf': self._process_cookie()['csrf'],
            'classid': classid,
            'sessionid': self._process_cookie()['sessionid']
        }
        answer_url = self.exam_answer_url + urllib.parse.urlencode(params)
        req = requests.get(answer_url, timeout=5)
        data = req.json()
        print(data['quiz'] + '的答案如下：')
        for answer in data['ans'].values():
            print(answer)

        # return answer_url

    def check_oncourse(self):
        """检查正在上课的课程列表"""
        oncourse_info = {}
        try:
            check_on_course = self.session.get(url=self.check_on_course_url, headers=self.headers2)
            js_onlesson = check_on_course.json()
            lesson_id = js_onlesson['data']['on_lessons'][0]['lesson_id']
            lesson_name = js_onlesson['data']['on_lessons'][0]['classroom']['name']
            oncourse_info = {'lesson_name': lesson_name, 'lesson_id': lesson_id}
            return oncourse_info
        except IndexError:
            print('你木有正在上课的课程哦！')
            return False

    def goto_class(self):
        flag = True
        while flag:
            if self.check_oncourse() == False:
                time.sleep(5)
            else:
                short_url = self.goto_class_url + str(self.check_oncourse()['lesson_id'])
                print(short_url)
                req = self.session.get(url=short_url, headers=self.headers)
                if req.status_code == '302':
                    print(self.check_oncourse()['lesson_name'] + '签到成功')
                else:
                    print('签到失败')
                flag = False

    def process_url(self):
        """处理最终的直播状态课程列表的URL"""
        new_url = self.lesson_info_url + str(self.check_oncourse()['lesson_id'])
        return new_url

    def _get_goto_class_info(self):
        data_info = self.session.get(url=self.process_url(), headers=self.headers2, timeout=6)
        js_goto = json.loads(data_info)
        presentation = js_goto['data']['activePresentationID']
        userid = js_goto['data']['userID']
        auth = js_goto['data']['userAuth']
        avatar = js_goto['data']['avatar']
        get_goto_dict = {
            "presentation": js_goto['data']['activePresentationID'],
            "userid": js_goto['data']['userID'],
            "auth": js_goto['data']['userAuth'],
            "avatar": js_goto['data']['avatar'],
        }
        return get_goto_dict

    def question_process(self):
        data_lesson_info = self.session.get(url=self.process_url(), headers=self.headers2, timeout=6)
        js_list = json.loads(data_lesson_info.text)
        info_list = js_list['data']['problemList']
        process_list = []
        for problemID in info_list:
            del problemID['answered']
            del problemID['index']
            for id in problemID.values():
                process_list.append(id)
        return process_list

    def get_answer(self):
        """直播答题的答案获取"""
        answer_list = []
        for id in self.question_process():
            # answer_key = 'answer'
            data_answer = self.session.get(url=self.answer_url + str(id), headers=self.headers2, timeout=5)
            js_data_answer = json.loads(data_answer.text)
            del js_data_answer['status']
            del js_data_answer['not_answered']
            del js_data_answer['success']
            del js_data_answer['problemID']
            del js_data_answer['data']
            del js_data_answer['msg']
            del js_data_answer['problem_type']
            del js_data_answer['answered_count']
            for result in js_data_answer.values():
                answer_list.append(result)
        return answer_list

    def get_index(self):
        """直播答题题目页数的获取"""
        index_list = []
        index_data = self.session.get(url=self.process_url(), headers=self.headers2, timeout=5)
        js_data_index = json.loads(index_data.text)
        js_info_text = js_data_index['data']['problemList']
        for pageID in js_info_text:
            del pageID['answered']
            del pageID['ProblemID']
            for num in pageID.values():
                index_list.append(num)
        return index_list

    def answer_message(self):
        """输出直播答题题目的信息"""
        answer_dict = dict(zip(self.get_index(), self.get_answer()))
        print("亲爱的主人，您本次课共有：" + str(len(self.get_index())) + " 题，答案分别是：")
        for index, answer in answer_dict.items():
            print("第" + str(index) + "页：" + answer)


if __name__ == '__main__':
    # name = input('请在下面输入您的邮箱：\n')
    # pwd = input('请在下面输入您的密码：\n')
    ykt = Ykt('', '')
    print('登录中......')
    time.sleep(2)
    ykt.login(load_cookies=True)
    if ykt.authorization()[1] == False:
        print(ykt.authorization()[0])
        print('按任意键退出')
        msvcrt.getwche()
    else:
        function = """
        _________   ___         ___           ___
        |  ______|  |  |        \  \         /  /
        |  |        |  |         \  \       /  /
        |  |        |  |          \  \     /  /
        |  |        |  |           \  \   /  /
        |  |        |  |            \  \ /  /
        |  |        |  |             \     /
        |  |        |  |              |    |
        |  |        |  |              |    |
        |  |        |  |              |    |
        |  |        |  |——————|       |    |
        ————        ——————————|       ———————
        1.【挂机签到模式】
        2.【课件预习模式】
        3.【课件答题模式】
        4.【直播答题模式】
        5.【考试答题模式】

        """
    print(function)
    choose_function = input("请选择功能：")
    if choose_function == '1':
        # ykt.goto_class()
        ykt.wss_client()
    elif choose_function == '4':

        if ykt.check_oncourse() == False:
            print('按任意键退出')
            msvcrt.getwche()
        else:
            active = True
            while active:
                print('这是您所有正在上课的课程ID：' + str(ykt.check_oncourse()['lesson_id']))
                message = input('请检查上述课程ID是否正确，如果正确请在下方输入 y : \n')
                if message == 'y':
                    ykt.answer_message()
                    break
                else:
                    active = False
            print('按任意键退出')
            msvcrt.getwche()
    elif choose_function == '5':
        ykt.get_course_list()
        classroom_id = input('请输入要考试的班级号，进入班级参加考试：')
        ykt.get_course_exams(classroom_id)
        quizid = input('请输入参加考试的试卷号：')
        print(ykt.get_exam_answer(quizid, classroom_id))

