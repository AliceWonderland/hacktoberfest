print("program 31 - HCF & LCM")

num1 = int(input("Enter number 1: "))
num2 = int(input("Enter number 2: "))

if num1 > num2:
	small = num2
	big = num1
elif num1 < num2:
	small = num1
	big = num2

for i in range(1,big+1,1):
	if (num1 % i == 0) and (num2 % i == 0):
		HCF = i
	
while True:
	if (big % num1 == 0) and (big % num2 == 0):
		LCM = big
		break
	big = big + 1

print("HCF:",HCF)
print("LCM:",LCM)