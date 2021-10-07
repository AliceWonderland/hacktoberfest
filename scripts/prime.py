
n = int(input("Enter a number: "))
statement = "is a prime number."
for x in range(2,n):
    if n%x == 0:
        statement = 'is not a prime number.'
print(n,statement)



