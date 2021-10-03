import random
import json

with open('settings.json') as f:
    settings = json.load(f)

tries = settings['tries']
num = random.randint(0, 10)

while True:
    num_input = int(input('Guess a number from 1 to 10? What is it? '))
    num_tries = 0

    if num_input == num:
        print('Correct')
        break
    elif num_tries > tries:
        print('You Lost!!!')
        break
    
    num_tries += 1
    