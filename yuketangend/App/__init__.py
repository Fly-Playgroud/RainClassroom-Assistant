# -*- coding: utf-8 -*-
# @Time : 2021/5/2 15:16
# @Author : Fly
# @Email :
# @File : __init__.py.py
# @Project : yuketang

from flask import Flask

from App.ext import init_ext
from App.config import config
from App.views import init_views


def create_app(env):
    app = Flask(__name__)

    #  初始化配置
    app.config.from_object(config.get(env))

    # 初始化第三方扩展
    init_ext(app)

    # 初始化views
    init_views(app)
    return app
