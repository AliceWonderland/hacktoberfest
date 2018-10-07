print("program 13 - Mark and Grade Result")

mark1 = int(input("Enter Mark 1: "))
mark2 = int(input("Enter Mark 2: "))
mark3 = int(input("Enter Mark 3: "))
mark4 = int(input("Enter Mark 4: "))

if mark1 > 100 or mark2 > 100 or mark3 > 100 or mark4 > 100:
	print("Mark cannot be greater than 100. Restart the program and try again!")

else:
	total = mark1 + mark2 + mark3 + mark4
	avg = (total)/4

	print("Total:",total)
	print("Average:",avg)

	if avg >= 75:
		print("Distinction")
	elif avg < 75 and avg >= 60:
		print("First Class")
	elif avg < 60 and avg >= 50:
		print("Second Class")
	elif avg < 50 and avg >= 40:
		print("Third Class")
	elif avg < 40:
		print("Fail")