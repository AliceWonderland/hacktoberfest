#Language: Python
#ENV: Visual Studio Code
#Author: Jeetesh Singh

import time
f=open('Github.txt','r')
for each in f:
    print(each, "\r")
    time.sleep(1)