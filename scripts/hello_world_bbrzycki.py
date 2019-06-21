# LANGUAGE: Python
# AUTHOR: Bryan Brzycki
# GITHUB: github.com/bbrzycki
import random
import sys
import time

target = 'Hello, world!'
for i in range(len(target)):
    a = chr(random.randint(32, 126))
    print(a, end='', flush=True)
    while a != target[i]:
        time.sleep(0.05)
        a = chr(random.randint(32, 126))
        print('\b%s' % a, end='', flush=True)
print('')
