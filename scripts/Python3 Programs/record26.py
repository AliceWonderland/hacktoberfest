print("program 26 - Fibonnaci recursion")

def fibo(n):  
	if n <= 1:
		return n
	else:
		return fibo(n-1) + fibo(n-2)

num = int(input("Enter a number: "))   

if num < 2:  
	print("Number entered should be greater than 2")  
else:  
	for i in range(num):
 		print(fibo(i), end=' ')