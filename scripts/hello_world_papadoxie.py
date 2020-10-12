from math import *

def f(x):
    return int(round(96.75 + -21.98*cos(x*1.118) + 13.29*sin(x*1.118) + -8.387*cos(2*x*1.118) \
               + 17.94*sin(2*x*1.118) + 1.265*cos(3*x*1.118) + 16.58*sin(3*x*1.118) \
               + 3.988*cos(4*x*1.118) + 8.463*sin(4*x*1.118) + 0.3583*cos(5*x*1.118) \
               + 5.878*sin(5*x*1.118)))

print "".join([chr(f(x)) for x in range(12)])

f(1)