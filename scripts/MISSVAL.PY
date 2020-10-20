T=int(input())

while(T):
    T-=1
    data= input()
    data= data.split(',')
    
    
    prev=0
    previd=0
    res=[]
    
    if(data[0]!='_'):
        prev=data[0]
    
    for i in range(1,len(data)):
        if data[i]!='_':
            diff=i-previd+1
            temp=(int(prev)+int(data[i]))/diff
            prev=temp
            previd=i 
            for j in range(diff-1):
                res.append(temp)
    
    if data[-1]!='_':
        res.append(temp)
    else:
        diff=len(data)-previd
        temp=int(prev)/diff
        for j in range(diff):
                res.append(temp)
    
    print(res)
