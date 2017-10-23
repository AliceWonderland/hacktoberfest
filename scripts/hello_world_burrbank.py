"""
LANGUAGE: python
VERSION: python3.x
AUTHOR: Ryan Porter
GITHUB: https://github.com/burrbank
"""

import string

def get_negative_index(letter: str, case: str) -> int:
    """return a negative index of a letter, in order to access a letter from a list"""
    if case == 'lower':
        return -(26 - ord(letter) + 97) #lower case starts at ascii 97
    if case == 'upper':
        return -(26 - ord(letter) + 65) #upper case starts at ascii 65

def caesarian(text: str, n: int) -> string:
    """return a cesarian cipher of text rotated around the alphabet by n"""
    ci = [] 
    for char in text:
        if char.islower(): #handle lower case
            ci.append(string.ascii_lowercase[get_negative_index(char, 'lower') + n])
        
        elif char.isupper(): #handle upper case
            ci.append(string.ascii_uppercase[get_negative_index(char, 'upper') + n])
        
        else: #handle non-letters 
            ci.append(char)
    return ''.join(ci) #combine items in ci into a single string

if __name__ == '__main__':

    cipher = 'Khoor zruog!'
    print(caesarian(cipher, 23))
