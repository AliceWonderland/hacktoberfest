#TUPLE
import random
t=[]
e=[]
o=[]
for i in range(1 , 11) :
    x=random.randint(1 , 99)
    t+=(x,)
print(t)
print()
for j in range(0,10) :
    if t[j]%2==0 :
        e+=(t[j],)
    else :
            o+=(t[j],)
print("even numbers",e)
print("odd numbers",o)
