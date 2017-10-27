# LANGUAGE: python
# AUTHOR: Intoro
# GITHUB: https://github.com/intoro

from flask import Flask
project = Flask(__name__)


@project.route('/')
def welcome():
    return "Hello World!"

if __name__ == '__main__':
    project.run()
