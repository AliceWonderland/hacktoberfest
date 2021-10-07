
n = int(input("Enter a number: "))
factors = "1"
for x in range(2,n+1):
    if n%x == 0:
        factors += (","+str(x))
print("Factors of",n,"are",factors)

