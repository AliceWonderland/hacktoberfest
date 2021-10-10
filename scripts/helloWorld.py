#!/usr/bin/env python3
"""project: Hello World
created:2021-10-09, @author:wmassey, email:wmassey776@gmail.com"""


from random import choice


def main():
    greeting_message()


    def greeting_message():
    greeting = choice(['hello', 'hi' 'howdy', 'bonjour', 'good day', 'hola', 'hi-ya', 'howdy'])
    print(f'{greeting.title()},  World!')
    

if __name__ == '__main__':
    main()
