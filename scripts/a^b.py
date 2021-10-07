
x = int(input("Enter base number: "))
y = int(input("Enter exponent number: "))
number = 1
for n in range(y):
    number *= x
print(x,"^",y," = ",number,sep="")

