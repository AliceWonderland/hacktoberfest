print("program 8 - Odd or Even")

num = int(input("Enter Number: "))

if num == 0:
	print('Zero is neither Odd or Even')
else:
	if num % 2 == 0:
		print("The Number is Even.")
	else:
		print("The Number is Odd.")