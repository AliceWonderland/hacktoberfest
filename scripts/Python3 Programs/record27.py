print("program 27 - Prime Number")

num = int(input("Enter number: "))

if num == 0:
	print("Zero is not Prime")
elif num == 1:
	print("1 is not Prime")

else:
	c = 1
	for i in range(2,num,1):
		if num % i == 0:
			c = 0
	if c == 1:
		print(num,"is a Prime Number")
	elif c == 0:
		print(num,"is not Prime Number")	