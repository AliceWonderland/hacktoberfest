print("program 18 - Sum of Digits of a Number")

num = int(input("Enter Number: "))
sum = 0

while num > 0:
	rem = num % 10
	sum = sum + rem
	num = int(num/10)
	
print("Sum: ",sum)