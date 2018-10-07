print("program 28 - Star Pattern 1")

n = int(input("Enter limit: "))

for i in range(1,n):
	for j in range(i):
		print('*', end='')
	print()