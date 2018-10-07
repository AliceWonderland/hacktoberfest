print("program 38 - Greatest List Item")

n = int(input('Enter limit: '))
L = [int(input('Enter number: ')) for i in range(n)]

max = L[0]
for i in L:
	if max < i:
		max = i
		
print("The Greatest number is",max)