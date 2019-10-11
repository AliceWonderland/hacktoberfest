# AUTHOR: Max R.
# LANGUAGE: Python
# GITHUB: https://github.com/maximus12793

def main():
    table = ['d', 'e', 'h', 'l', 'o', 'r', 'w']
    h = table[2] + table[1] + table[3] + table[3] + table[4]
    w = table[-1] + table[-3] + table[-2] + table[-4] + table[0]
    print ' '.join([h, w])


if __name__ == '__main__':
    main()
