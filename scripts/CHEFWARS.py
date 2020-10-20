T = int(input())


for i in range(T):
    H, P = map(int, input().split(' '))
    
    while(True):
        if(H<=0 or P>=H):
            print('1')
            break
        elif(P==0):
                print('0')
                break
        else:
            if(P<=(H/2)):
                print('0')
                break
            H = H-P
            P = int(P/2)
            

