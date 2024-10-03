sum = 0
print("Enter the Value of n: ")
n = int(input())
print("Enter " + str(n) + " Numbers: ")
for i in range(n):
    num = int(input())
    sum = sum+num
print("Sum of " + str(n) + " Numbers = " + str(sum))
