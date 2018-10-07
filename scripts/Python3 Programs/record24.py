print("program 24 - Factorial using recursion")

def factorial(num):  
	if num == 1:  
		return num 
	else:  
		return num*factorial(num-1)  
  
num = int(input("Enter a number: "))    

if num < 0:  
	print("Negative Number not allowed")  
elif num == 0:  
	print("The factorial of 0 is 1")  
else:  
	print("The factorial of",num,"is",factorial(num))  