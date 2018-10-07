print("program 14 - Gross Pay Calculation")

hours = int(input("Enter Number of Hours worked: "))
rate = int(input("Enter Rate per Hour: "))

if  hours < 40:
	gross = hours * rate
elif  hours > 40:
	gross = hours * rate * 1.5

print("Gross Pay: ",gross)