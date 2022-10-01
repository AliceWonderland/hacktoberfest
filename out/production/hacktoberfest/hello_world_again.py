# LANGUAGE: Python 3
# AUTHOR: Luiz Devitte
# GitHub: https://github.com/LuizDevitte

def greetings(name):
    print('\n')
    print('Hello, World!')
    print('And Hello, {}!'.format(name))
    print('\n')
    return 0

def main():
    name = input('Hey, who are you? ')
    greetings(name)


if __name__=='__main__':
    main()
