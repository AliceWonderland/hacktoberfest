x = int(input())
y = str(x)
seven_list = list()

for char in y :

    if(y.count(char) > 7) :
        seven_list.append(char)


def cond_4(num):
    for i in range(10):
        if str(i) * 6 in str(num):
            return False
    return True


if (len(y)==10):

    if (y[0]== "6" or y[0]== "7" or y[0]== "8" or y[0] == "9"):
    
        if (len(seven_list)==0):
        
            if ( cond_4(x) == True ):
            
                print("valid")
        
            else:
                print("invalid")
        
        else:
            print("invalid")
    
    else:
        print("invalid")   
else:
    print("invalid")
