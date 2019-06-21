print("program 43 - Common Member of 2 Lists")

n1 = int(input("Enter limit for List 1: "))
n2 = int(input("Enter limit for List 2: "))
L = [input("Enter List 1 item: ") for i in range(n1)]
M = [input("Enter List 2 item: ") for i in range(n2)]

for i in L:
	for j in M:
		if i == j:
			print("True")
			break
	else:
		continue
	break
else:
	print("False")