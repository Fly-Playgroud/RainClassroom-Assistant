# -*- coding: utf-8 -*-
# @Time : 2021/5/2 16:46
# @Author : Fly
# @Email :
# @File : answerApi.py
# @Project : yuketang
import json

from flask import Blueprint, request, Flask

answers = Blueprint('answers', __name__)



@answers.route('/examination/', methods=["POST"])
def get_answer():
    req = request.get_json()
    print(req)
    from App.utils import down
    data = down.getAnswer(paramsDict=req)
    result = {'code': 200, 'message': '飞跃雨课堂项目QQ群：967118049', 'answer': data}
    response = json.dumps(result, ensure_ascii=False)
    # os.remove(name)
    return response


@answers.route('/ppt/', methods=['GET', 'POST'])
def answer_ppt():
    req = request.get_json()
    from App.utils import down
    data = down.ppt_answer(paramDict=req)
    result = {'code': 200, 'message': '飞跃雨课堂项目QQ群：967118049', 'answer': data}
    response = json.dumps(result, ensure_ascii=False)
    return response


