print("program 4 - Calculate Areas of Shapes")

print ('1. Triangle \n2. Rectangle \n3. Circle \n4. Square')
ch = int(input("Enter choice: "))

if ch == 1:
	print("Triangle")
	t_h = int(input("Enter Triangle Height  :  "))
	t_b = int(input("Enter Triangle Breadth : "))
	t_a = 1/2 * t_h * t_b
	print ("Triangle Area:",t_a)

elif ch == 2:
	print("Rectangle")
	r_l = int(input("Enter Rectangle Length  :  "))
	r_b = int(input("Enter Rectangle Breadth : "))
	r_a = r_l * r_b
	print ("Rectangle Area:",r_a)

elif ch == 3:
	print("Circle")
	c_r = int(input("Enter Circle Radius : "))
	c_a = 3.14*(c_r**2)
	print ("Circle Area:",c_a)

elif ch == 4:
	print("Square")
	s_s = int(input("Enter Square Side : "))
	s_a = s_s**2
	print ("Square Area:",s_a)
