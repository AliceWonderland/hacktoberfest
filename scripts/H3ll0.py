#!/usr/bin/env python
# -*- coding: utf-8 -*-

def newMember(num):
    if num == 4:
        print("Hi there ! New to github and love hacktober <3")
    elif num == 5:
        print("Hi there ! I'm also a pwn3r apprentice :3")
    else:
        print("too easy, you're the best :3")

def callMeMaybe():
    b=["fl","v3","-","l0","th","4t","ag"]
    flag = '{}{}{}{}{}{}{}'.format(b[0], b[6], b[2], b[3], b[1], b[4], b[5])
    print('The flag is: {}'.format(flag))


if __name__ == "__main__":
    a = raw_input("Choose a number between 1 and 3 : ")
    newMember(a)

