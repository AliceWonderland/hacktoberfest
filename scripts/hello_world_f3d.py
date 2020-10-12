# LANGUAGE: Python3
# AUTHOR: Ajay Raj
# GITHUB: https://github.com/ajay-raj-s

ascii_hello = [ord(i) for i in 'Hello, world!']

print(''.join([chr(i) for i in ascii_hello]))
