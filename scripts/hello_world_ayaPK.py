# LANGUAGE: Python
# ENV: Python 3.7 - Pycharm
# AUTHOR: Aya Stead
# GITHUB: https://github.com/AyaPK

bee_movie = """according to all known laws of aviation, there is no way a bee should be able to fly.
its wings are too small to get its fat little body off the ground.
the bee, of course, flies anyway because bees don't care what humans think is impossible."""

string_to_create = "hello world."

def findLetter(toFind):
    for index, letter in enumerate(bee_movie, start=0):
        if letter == toFind:
            return index

print("".join(bee_movie[findLetter(x)] for x in string_to_create))