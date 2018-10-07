print("program 11 - Salary Bonus Calculation")

salary = int(input("Enter Salary: "))
sex = input("Enter Gender (m or f): ")
extra = 0

if sex.lower() == 'm' or sex.lower() == 'male':
	bonus = (5/100) * salary
elif sex.lower() == 'f' or sex.lower() == 'female':
	bonus = (10/100) * salary
if salary < 10000:
	extra = (2/100) * salary
	
salary = salary + bonus + extra
print("Your salary will be: ",salary)