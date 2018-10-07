print("program 39 - Smallest List Item")

n = int(input('Enter limit: '))
L = [int(input('Enter number: ')) for i in range(n)]

min = L[0]
for i in L:
	if min > i:
		min = i

print("The Smallest number is",min)