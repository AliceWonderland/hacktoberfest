#Check if a number is automorphic or not

num = int(input("Enter a number you want to check: \n"))  
  
#calculating the number of digits  
num_of_digits = len(str(num))  
  
#computing the square of a number  
square = num**2  
  
#obtaining the last digits   
last_digits = square%pow(10,num_of_digits)  
  
#comparing the digits of number with input  
if last_digits == num:  
  print("Yes, {} is an automorphic number".format(num))  
else:  
  print("No, {} is not an automorphic number".format(num)) 
