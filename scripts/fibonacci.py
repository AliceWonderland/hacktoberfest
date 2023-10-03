# -*- coding: utf-8 -*-

import random

__author__ = "Michael Ortiz"
__license__ = "GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007"
__version__ = "1.0"
__maintainer__ = "Michael Ortiz"
__github__ = "https://github.com/michaeldemattos"


def fib(number: int) -> list:
    """ Get list of fibonacci sequence until param n """
    lst: list = []
    a, b = 0, 1
    while a < number:
        lst.append(a)
        a, b = b, a+b
    return lst

if __name__ == "__main__":
    number = random.randint(1, 1000)
    fib_sequence = fib(number=number)
    print(f"Your fibonacci sequence until {number} number is {fib_sequence}",
          flush=True)
