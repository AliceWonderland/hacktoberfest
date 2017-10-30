# LANGUAGE: Python
# AUTHOR: Nikhil
# GITHUB: https://github.com/computelarge
def s(a):
    if(a<=1):
        return 1;
    else:
        return (a+s(a-1))    
num = 5
print "Sum of ",num," numbers is ",s(num)
