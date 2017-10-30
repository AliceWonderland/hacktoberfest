# LANGUAGE: Python
# ENV: Python 2
# AUTHOR: Aarushi Arya
# GITHUB: https://github.com/aarushi15002
print "Enter number"
n = 7

def fib(a,b,c,d):
    print c;
    c=a+b;
    a=b;
    b=c;
    d-=1
    if(d>0):
        fib(a,b,c,d);
fib(0,1,1,n)

