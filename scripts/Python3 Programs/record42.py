print("program 42 - Clone A List")

n = int(input("Enter limit: "))
L = [input("Enter list item: ") for i in range(n)]
M = []

for i in L:
	M.append(i)
print(M)