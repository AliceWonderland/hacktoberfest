print("program 9 - Largest of 2 Numbers")

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

if num1 > num2:
	print(num1,"is greater than",num2)
elif num2 > num1:
	print(num2,"is greater than",num1)
else:
	print("Both numbers are equal.")