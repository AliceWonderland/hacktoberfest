# Language: Python #
# Environment / IDE: PyCharm #
# Author: Keelan M. #
# Github: https://github.com/imkeelan #

def helloworld():
    hi = input("Hello? \n")
    if hi == "hello":
        print("Hello world! \n")
    elif hi == "Hello":
        print ("Hello world! \n")
    elif hi == "hi":
        print("Hi world! \n")
    elif hi == "Hi":
        print("Hi world! \n")
    else:
        print("Invalid input. Try again! \n")
        helloworld()
helloworld()