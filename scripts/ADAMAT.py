T=int(input())

while(T):
    
    N=int(input())
    A=[]
    for i in range(N):
        temp= list(map(int,input().split(' ')))
        A.append(temp)
    
    count=0
    ticklist=[]
    for j in range(N):
        if(A[0][j]==j+1):
            ticklist.append(1)
        else:
            ticklist.append(0)
    
    
    for i in range(1,N):
        if(ticklist[i]!=ticklist[i-1]):
            if(ticklist[i]==0 and ticklist[i-1]==1):
                count+=1
    
    
    if(ticklist[1]==0):
        print((2*count)-1)
    else:
        print(2*count)
    
    
    T-=1
    
    
    
