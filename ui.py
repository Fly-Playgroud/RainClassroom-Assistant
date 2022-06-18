# -*- coding: utf-8 -*-
# @Time : 2021/1/1 18:47
# @Author : Fly
# @Email :
# @File : ui.py
# @Project : 雨课堂

import sys
import time
import re
import resources

from PySide2.QtWebEngineWidgets import QWebEngineView, QWebEngineSettings
from PySide2.QtWidgets import QApplication, QMainWindow, QMessageBox, QDockWidget, QTabWidget, QAction, QToolBar, \
    QGridLayout, QListWidget
from PySide2.QtGui import QIcon
from PySide2.QtCore import QSize, Qt
from utils import Utils
from PySide2.QtCore import QUrl, QThread, Signal


class NewWebView(QWebEngineView):
    def __init__(self, tabWidget):
        super().__init__()
        self.tabWidget = tabWidget

    def createWindow(self, WebWindowType):
        new_webview = NewWebView(self.tabWidget)
        self.tabWidget.newTab(new_webview)
        return new_webview


class Worker(QThread):
    singOut = Signal(dict)

    def __init__(self, session, host):
        super(Worker, self).__init__()
        self.working = True
        self.session = session
        self.host = host

    def __del__(self):
        self.working = False
        self.wait()

    def run(self):

        while self.working:
            ykt = Utils(session=self.session, host=self.host)
            oncourseInfo = ykt.checkOncourse()
            if not oncourseInfo:
                msg = {
                    'msg': '你没有正在上的课程',
                    'status': False
                }
                QApplication.processEvents()
                self.singOut.emit(msg)
                self.sleep(10)
            else:
                msg = {
                    'msg': oncourseInfo['lesson_name'] + ' 签到成功 ' + time.strftime('%Y-%m-%d-%H_%M_%S',
                                                                                  time.localtime()),
                    'status': True,
                    'lessonId': oncourseInfo['lesson_id'],
                    'attendUrl': oncourseInfo['attendUrl'],
                    'version': oncourseInfo['version']
                }
                # self.lessonId.append()
                # lessonId = self.lessonId[0]
                # host = self.versionHost
                # tarUrl = 'https://' + host + '/lesson/fullscreen/' + str(lessonId) + '?source=5'
                self.singOut.emit(msg)
                self.__del__()


class MyThread(QThread):
    singOut = Signal(list)

    def __init__(self, param=None):
        super(MyThread, self).__init__()
        self.working = True
        self.session = param
        self.fuc = param

    def __del__(self):
        self.working = False
        self.wait()

    def run(self):
        result = self.fuc()
        self.singOut.emit(result)


class UI(QMainWindow, ):
    def __init__(self):
        super(UI, self).__init__()
        self.setWindowTitle('RainClassroom-Assistant|Fly')
        self.resize(1300, 1000)
        self.setWindowIcon(QIcon(':icons/yuketang.png'))

        self.cookies = {}
        self.versionHost = []
        self.examHost = []

        self.main_toolbar = QToolBar()
        self.main_toolbar.setIconSize(QSize(32, 32))
        self.main_toolbar.setOrientation(Qt.Orientation.Vertical)
        self.addToolBar(Qt.ToolBarArea.LeftToolBarArea, self.main_toolbar)
        self.tabs = QTabWidget()
        self.tabs.setDocumentMode(True)
        self.tabs.setTabsClosable(True)
        # self.tabs.currentChanged.connect(self.tabChange)
        self.tabs.setTabShape(QTabWidget.Triangular)
        self.tabs_layout = QGridLayout()
        self.setCentralWidget(self.tabs)
        self.tabs.setLayout(self.tabs_layout)

        self.utils_toolbar = QToolBar()
        self.utils_toolbar.setIconSize(QSize(32, 32))
        self.utils_toolbar.setOrientation(Qt.Orientation.Vertical)

        self.view = NewWebView(self)

        # self.settings = QWebEngineSettings.defaultSettings()
        self.view.settings().setFontFamily(QWebEngineSettings.StandardFont, '仓耳今楷05-W05.ttf')
        self.view.settings().setAttribute(QWebEngineSettings.PluginsEnabled, True)
        self.view.settings().setAttribute(QWebEngineSettings.JavascriptEnabled, True)
        # proFile = QWebEngineProfile(parent=self.view)

        self.view.load(QUrl('http://ykt.3xittec.cn/'))
        self.newTab(self.view)

        self.turn_button = QAction(QIcon(':icons/zhuandao.png'), 'Turn', self)
        self.back_button = QAction(QIcon(':icons/back.png'), '点我就可以后退喔(ˆoˆԅ)', self)
        self.next_button = QAction(QIcon(':icons/forward.png'), '点我就可以前进一步喔乛◡乛', self)
        self.reload_button = QAction(QIcon(':icons/reload.png'), '点我刷新界面喔*^_^*', self)
        self.add_button = QAction(QIcon(':icons/add.png'), '点我多开窗口喔(´･_･`)', self)
        self.funButton = QAction(QIcon(':icons/function.png'), '你懂的的小功能（乛◡乛）', self)

        self.main_toolbar.addAction(self.back_button)
        self.main_toolbar.addAction(self.next_button)
        self.main_toolbar.addAction(self.reload_button)
        self.main_toolbar.addAction(self.add_button)
        self.main_toolbar.addAction(self.funButton)

        self.back_button.triggered.connect(self.backClick)
        self.next_button.triggered.connect(self.forwardClick)
        self.reload_button.triggered.connect(self.reloadClick)
        self.tabs.tabBarDoubleClicked.connect(self.multiTab)
        self.funButton.triggered.connect(self.utils)
        self.add_button.triggered.connect(self.multiTab)
        self.tabs.tabCloseRequested.connect(self.Closepage)

        self.onLineList = QListWidget()
        self.status = self.statusBar()
        self.status.showMessage('反馈交流群：366612693')

        self.myDock = QDockWidget('数据面板', self)
        self.myDock.setAllowedAreas(Qt.AllDockWidgetAreas)
        self.myDock.setFeatures(QDockWidget.AllDockWidgetFeatures)
        self.addDockWidget(Qt.RightDockWidgetArea, self.myDock)
        # self.myDock.setFloating(True)
        self.myDock.setHidden(True)
        self.myDock.setWidget(self.onLineList)
        self.t = MyThread()

    # def tabChange(self, index):
    #     currentView = self.tabs.widget(index)
    #     if currentView:
    #         currentViewUrl = self.getUrl(currentView)
    #         self.examHost.append(currentViewUrl)

    def newTab(self, view):
        view.titleChanged.connect(self.webTitle)
        currentUrl = self.getUrl(view)
        self.tabs.addTab(view, '新标签页')
        self.tabs.setCurrentWidget(view)
        view.page().profile().cookieStore().cookieAdded.connect(self.getCookie)
        return currentUrl

    def webTitle(self, title):
        index = self.tabs.currentIndex()

        if title == '雨课堂网页版-登录':
            self.view.loadFinished.connect(self.removeServer)
            self.versionHost.append(self.view.url().toString().split('/')[2])
        if len(title) > 16:
            title = title[0:17]
        self.tabs.setTabText(index, title)

    def getUrl(self, webview):
        url = webview.url().toString()
        return url

    # def closeTab(self, index):
    #     if self.tabWidget.count() > 1:
    #         self.tabWidget.widget(index).deleteLater()
    #         self.tabWidget.removeTab(index)
    #     elif self.tabWidget.count() == 1:
    #         self.tabWidget.removeTab(0)
    #         self.on_pb_new_clicked()
    def Closepage(self, i):
        if self.tabs.count() < 2:
            return
        self.tabs.removeTab(i)

    def multiTab(self):
        url = self.newTab(self.view)
        infList = url.split('/')
        tarUrl = 'https://' + infList[2] + '/v2/web'
        neView = NewWebView(self)
        self.newTab(neView)
        neView.load(QUrl(tarUrl))

    def removeServer(self):
        removeJs = 'document.querySelector(".server-wrapper").remove();'
        self.view.page().runJavaScript(removeJs)

    def getCookie(self, cookie):
        name = cookie.name().data().decode('utf-8')  # 先获取cookie的名字，再把编码处理一下
        value = cookie.value().data().decode('utf-8')  # 先获取cookie值，再把编码处理一下
        if name == 'sessionid' or 'x_access_token':
            self.cookies[name] = value

    def forwardClick(self):
        self.tabs.currentWidget().forward()

    def backClick(self):
        self.tabs.currentWidget().back()

    def reloadClick(self):
        self.tabs.currentWidget().reload()

    def hookPPt(self):
        pptUrl = self.tabs.currentWidget().url().toString()
        infList = pptUrl.split('/')
        cardId = infList[7]
        session = self.cookies['sessionid']
        host = self.versionHost[0]
        ykt = Utils(session=session, host=host)
        answer = ykt.ppt(cardId)
        return answer

    def pptFram(self, result):
        if result[0] is not False:
            for item in result[1]:
                for k, v in item.items():
                    msg = '第 ' + k + ' 页：' + v
                    self.onLineList.addItem(msg)
        else:
            self.onLineList.addItem(result[1])

    def ppt(self):
        pptUrl = self.tabs.currentWidget().url().toString()
        infList = pptUrl.split('/')
        pptJS = """
        var turnon = document.querySelector('.check').click()
        var ppt = setInterval(getPPtInfo,5000);
        function getPPtInfo(){
            var pptList = document.getElementsByClassName('flag noRead');
            var len = pptList.length
            console.log(len)
            if (len==0){
                var turnoff = document.querySelector('.close').click();
                alert('本ppt以观看完毕');
                clearInterval(ppt);
            } else {
                pptList[0].click()
            }
            return len
        }

                """
        if 'studentCards' in infList:
            self.view.page().runJavaScript(pptJS)
            self.myDock.setHidden(False)
            self.onLineList.clear()
            self.onLineList.addItem('小飞拿着铁锹正在谷歌君的家里努力挖掘中......')
            self.t = MyThread(self.hookPPt)
            self.t.start()
            self.t.singOut.connect(self.pptFram)
        else:
            QMessageBox.warning(self, '你犯错了呢！(,,Ծ‸Ծ,, )', '请在PPT页面执行该功能喔，\n这样才不会犯错了呢！', QMessageBox.Yes)

    def onlinecourse(self):
        # flag = True
        self.myDock.setHidden(False)
        self.onLineList.clear()
        session = self.cookies['sessionid']
        host = self.versionHost[0]
        self.thread = Worker(session, host)
        self.thread.start()
        self.thread.singOut.connect(self.onlinefram)

    def myDockCheck(self):
        flag = self.myDock.isHidden()
        if flag:
            self.myDock.setHidden(False)
            self.onLineList.clear()

    def onlinefram(self, msg):
        if not msg['status']:
            self.onLineList.addItem(msg['msg'])
        else:
            lessonId = str(msg['lessonId'])
            courseVersion = msg['version']
            neView = NewWebView(self)
            self.newTab(neView)
            if courseVersion is 3:
                neView.load(QUrl(msg['attendUrl'].format(self.versionHost[0], lessonId)))
                self.onLineList.addItem(msg['msg'])
                self.onLineList.addItem('此直播课版本为V3版本，直播习题暂无答案')
            else:
                # tarUrl = 'https://' + self.versionHost[0] + '/lesson/fullscreen/' + lessonId + '?source=5'
                neView.load(QUrl(msg['attendUrl'].format(self.versionHost[0], lessonId)))
                self.onLineList.addItem(msg['msg'])
                ykt = Utils(self.cookies['sessionid'], host=self.versionHost[0])
                problemList = ykt.getOnlineProblem(lessonId)
                answerList = ykt.getOnlineAnswer(problemList)
                index = [str(item['index']) for item in problemList]
                self.onLineList.addItem('本次课程共有 ' + str(len(index)) + ' 道题')
                answerDict = dict(zip(index, answerList))
                for index, answer in answerDict.items():
                    anmsg = '第' + str(index) + '页：' + answer
                    self.onLineList.addItem(anmsg)

    def examTypeCheck(self):
        currentUrl = self.tabs.currentWidget().url().toString()
        newFlag = '-'
        newFlag2 = 'examination'
        normalFlag = 'studentQuiz'
        if re.search(newFlag, currentUrl) or re.search(newFlag2, currentUrl) is not None:
            self.examHost.append(currentUrl.split('/')[2])
            examId = currentUrl.split('/')[4].split('?')[0]
            examInfo = {
                'examType': 5,
                'examId': examId
            }
            return examInfo
        elif re.search(normalFlag, currentUrl) is not None:
            examId = currentUrl.split('/')[6]
            examInfo = {
                'examType': 4,
                'examId': examId
            }
            return examInfo
        else:
            return False

    def getExamans(self):
        examId = self.examTypeCheck()['examId']
        try:
            x_access_token = self.cookies['x_access_token']
        except KeyError:
            x_access_token = None
        session = self.cookies['sessionid']
        host = self.versionHost[0]
        ykt = Utils(session=session, token=x_access_token, host=host, examHost=self.examHost)
        if self.examTypeCheck()['examType'] == 4:
            answer = ykt.oldExamAns(examId)
        else:
            answer = ykt.newExamProblem(examId)
        return answer
        # for i, item in enumerate(answer):
        #     msg = '第'+str(i+1)+'题：'+item
        #     self.onLineList.addItem(msg)

    def examButton(self):
        if not self.examTypeCheck():
            QMessageBox.warning(self, '你犯错了呢！(,,Ծ‸Ծ,, )', '请在考试页面执行该功能喔，\n这样小飞才可以用爱发电啊！', QMessageBox.Yes)
        else:
            self.myDock.setHidden(False)
            self.onLineList.clear()
            self.onLineList.addItem('小飞拿着铁锹正在谷歌君的家里努力挖掘中......')
            self.t = MyThread(self.getExamans)
            self.t.start()
            self.t.singOut.connect(self.examFram)

    def examFram(self, result):
        for i, item in enumerate(result):
            info = '第' + str(i + 1) + '题：' + item
            self.onLineList.addItem(info)

    def utils(self):
        if not self.utils_toolbar.isHidden():
            self.utils_toolbar.setHidden(True)
            # QMessageBox.warning(self, '你犯错了呢！(,,Ծ‸Ծ,, )', '工具栏已经出来了，\n别按我了，好疼啊！', QMessageBox.Yes)
        else:
            self.addToolBar(Qt.ToolBarArea.BottomToolBarArea, self.utils_toolbar)
            self.utils_toolbar.setHidden(False)

            self.pptButton = QAction(QIcon(':icons/PPT.png'), '课件预习、答题')
            self.onlineCourse = QAction(QIcon(':icons/onlineanswer.png'), '直播签到、答题')
            self.execiseOut = QAction(QIcon(':icons/exciseout.png'), '直播习题导出')
            self.examAnswer = QAction(QIcon(':icons/examination.png'), '考试答题')

            self.utils_toolbar.addAction(self.pptButton)
            self.utils_toolbar.addAction(self.onlineCourse)
            self.utils_toolbar.addAction(self.execiseOut)
            self.utils_toolbar.addAction(self.examAnswer)

            self.pptButton.triggered.connect(self.ppt)
            self.onlineCourse.triggered.connect(self.onlinecourse)
            self.examAnswer.triggered.connect(self.examButton)
            self.execiseOut.triggered.connect(
                lambda x: QMessageBox.warning(self, '好累啊！(,,Ծ‸Ծ,, )', '该功能等下个版本吧\n让小飞的爸爸休息下吧！',
                                              QMessageBox.Yes))


if __name__ == '__main__':
    app = QApplication(sys.argv)
    gui = UI()
    gui.show()
    sys.exit(app.exec_())
