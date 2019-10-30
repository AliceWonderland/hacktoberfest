ip = list(map(int, input().split()))
n = ip[0]
m = ip[1]
welLine = int(n/2)
d = '.|.'
for i in range(n):
        if i < welLine:
            des = d*(2*i+1)
        elif i == welLine:
            des = 'WELCOME'
            prev = 2*i-1
        else:
            des = d*(prev)
            prev -= 2
        print(des.center(m, '-'))