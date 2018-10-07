print("program 20 - Factorial of a Number")

num = int(input("Enter number: "))
product = 1

if num > 1:
	for i in range(1,num+1,1):
		product = product * i
	print("Factorial is",product)
elif num == 1:
	print("Factorial is 1")
else:
	print("Number should be greater than 0")