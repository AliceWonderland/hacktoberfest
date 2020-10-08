#input any two numbers to get the sum of all numbers in between
x  = int(input())
y  = int(input())
sum = 0
#This will take out sum of all numbers in between the provided numbers.(both including)
for i in range(x,y+1):
    sum = sum + i
    
#Let's print the output
print(sum)
