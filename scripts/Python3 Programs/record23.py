print("program 23 - Function to find the Largest of 3 Numbers")

def largest(num1,num2,num3):
	if num1 > num2:
		max = num1
	else:	
		max = num2
	if max > num3:
		print(max,'is the largest')
	else:
		print(num3,'is the largest')

a = int(input("Enter 1st Number: "))
b = int(input("Enter 2nd Number: "))
c = int(input("Enter 3rd Number: "))

largest(a,b,c)