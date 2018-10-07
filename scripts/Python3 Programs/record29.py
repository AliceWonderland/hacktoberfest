print("program 29 - Number Pattern 1")

n = int(input("Enter limit: "))

num = 1
for i in range(n):
	for j in range(i+1):
		print(num, end=' ')
		num = num + 1
	print()