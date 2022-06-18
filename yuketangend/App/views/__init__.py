# -*- coding: utf-8 -*-
# @Time : 2021/5/2 15:20
# @Author : Fly
# @Email : fly@3xittec.cn
# @File : __init__.py.py
# @Project : yuketang
from App.views.answerApi import answers
from App.views.answerApi import imgs


def init_views(app):
    app.register_blueprint(answers, url_prefix='/api/v4')
    app.register_blueprint(imgs, url_prefix="/api/hawk")
