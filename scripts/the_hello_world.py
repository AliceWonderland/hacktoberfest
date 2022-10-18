#Lang Python3
#Author Raunak Saigal
#github https://github.com/raunaksaigal

from random import randint

worlds = ['hello world', 'heya fellas', 'HELLO WORLD']
t = True

while t:
    q = randint(0,2)
    string = input("press enter to continue or 'q' to quit: ")
    if string == '':
        print(worlds[q])
    else:
        break
