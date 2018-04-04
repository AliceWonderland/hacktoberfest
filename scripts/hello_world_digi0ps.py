# LANGUAGE: Python
# ENV: python3
# AUTHOR: Sriram Ravichandran
# GITHUB: https://github.com/digi0ps

import time


def hello_world():
    string = "HELLO WORLD. I AM SRIRAM."
    for char in string:
        print(char, end=" ")
        time.sleep(3)
    return 1

print("Wait for a min ;)")
hello_world()
