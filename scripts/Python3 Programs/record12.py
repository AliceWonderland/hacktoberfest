print("program 12 - Tax Calculation")

income = int(input("Enter Income: "))

if income < 150000:
	tax = 0
elif income >= 150000 and income <= 300000:
	tax = (10/100)*income
elif income >= 300001 and income <= 500000:
	tax = (20/100)*income
elif income >= 500001:
	tax = (30/100)*income

print("Your tax is: ",tax)