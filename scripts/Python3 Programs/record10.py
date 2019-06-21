print("program 10 - Largest of 3 Numbers")

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
num3 = int(input("Enter 3rd number: "))

if num1 > num2:
	max = num1
else:
	max = num2
if max > num3:
	print(max,'is the largest.')
else:
	print(num3,'is the largest.')