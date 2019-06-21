print("program 5 - Temperature Conversion")

print ("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius")
ch = int(input("Enter Choice 1 or 2: "))

if ch == 1:
	C = float(input("Enter temperature in Celsius: "))
	F = (9/5*C)+32
	print (F,"'F")
elif ch == 2:
	F = float(input("Enter temperature in Fahrenheit: "))
	C = 5/9*(F-32)
	print (C,"'C")
else:
	print ("Invalid Choice")