print("program 21 - Fibonacci Series")

num = int(input("Enter limit: "))

if num > 2:
	a,b = 0,1
	print(a,b,end=" ")
	n = 2
	while n < num:
		c = a+b
		a = b
		b = c 		
		print (c,end=" ")
		n = n + 1
	print("")

elif num == 2:
	print("0 1")
else:
	print("Have to enter a limit greater than 2. Restart the program and try again!")