# LANGUAGE: Python
# ENV: Python 3.7.1 (IDLE)
# AUTHOR: Muhammad Bilal
# GITHUB: https://github.com/Muhammad-Bilal-MB

def hacktober(name, year):
    print(name + " welcome to the Hacktoberfest " + year)

name = str(input("Enter your name : "))
year = str(input("Enter Year : "))

hacktober(name, year)
