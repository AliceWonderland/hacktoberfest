print("program 44 - Remove Even Numbers from a list")

n = int(input("Enter limit: "))
L = [int(input("Enter list item: ")) for i in range(n)]
M = []

for i in L:
	if i % 2 == 0:
		continue
	else:
		M.append(i)
print(M)