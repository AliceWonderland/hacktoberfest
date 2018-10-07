print("program 40 - First and Last Character Same")

L = ['abc', 'xyz', 'aba', '1221']
count = 0

for i in L:
	if i[0] == i[-1]:
		count+=1
		print(i)