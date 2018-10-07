print("program 37 - Sum of List Items")

n = int(input('Enter limit: '))
L = [int(input('Enter number: ')) for i in range(n)]

sum = 0
for i in L:
	sum+=i
	
print("The sum is",sum)