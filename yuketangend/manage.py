# -*- coding: utf-8 -*-
# @Time : 2021/5/2 15:48
# @Author : Fly
# @Email : fly@3xittec.cn
# @File : manage.py
# @Project : yuketang
import os

from flask_migrate import MigrateCommand
from flask_script import Manager, Server

from App import create_app

env = os.environ.get("FLASK_ENV") or 'default'

app = create_app(env)

manger = Manager(app)

manger.add_command('db', MigrateCommand)
manger.add_command('runserver', Server(port=8000, threaded=True))

if __name__ == '__main__':
    manger.run()
