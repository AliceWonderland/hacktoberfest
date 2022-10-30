# Python3 code to demonstrate
# the exception of fabs()

# for fabs()
import math

# initializing string
c = "gfg"

# initializing complex number
d = 4 + 2j

# checking for exceptions
try :
	print("The absolute value of string is :")
	print(math.fabs(c))

except Exception as e:
		print("Error !! The error on passing string is :")
		print(str(e))
		
print("\r")

try :
	print("The absolute value of complex is :")
	print(math.fabs(d))

except Exception as e:
		print("Error !! The error on passing complex is :")
		print(str(e))
