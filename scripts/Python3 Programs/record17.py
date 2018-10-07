print("program 17 - Palindrome Number Check")

num = int(input("Enter Number: "))
orginal = num
new = 0

while num > 0:
	rem = num % 10
	new = (new * 10) + rem
	num = int(num/10)

if new == orginal:
	print("The Number is a Palindrome")
else:
	print("The Number is not Palindrome")