print("program 30 - Prime Numbers between 100-200")

for num in range(100,200,1):
	c = 1

	for i in range(2,num,1):
		if num % i == 0:
			c = 0
	if c == 1:
		print(num,end=' ')