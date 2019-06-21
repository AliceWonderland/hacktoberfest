print("program 25 - Sum of Digits using recursion")

def digitsum(n):  
	if n == 0:
		return n
	else:
		return n+digitsum(n-1)
  
num = int(input("Enter a number: "))

if num == 0:  
	print("The sum is 0")  
else:  
	print("The sum of digits of",num,"is",digitsum(num))