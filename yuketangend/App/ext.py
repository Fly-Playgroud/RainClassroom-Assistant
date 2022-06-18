# -*- coding: utf-8 -*-
# @Time : 2021/5/2 15:44
# @Author : Fly
# @Email :
# @File : ext.py
# @Project : yuketang
from flask_migrate import Migrate
from flask_sqlalchemy import SQLAlchemy
migrate = Migrate()
db = SQLAlchemy()


def init_ext(app):

    #  初始化数据库
    db.init_app(app)
    migrate.init_app(app, db)
