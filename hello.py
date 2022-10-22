#printing hello world in python language
#simplest method
print("Printing in python")
print("HELLO WORLD  !!")

#printing hello world number of times user wants
n=int(input("please enter number of times you want to print hello world"))
for i in range(n):
    print("HELLO WORLD!!")

#printing hello world in triangle shape using function
def triangle(n):
    k=n-3
    for i in range (0,n):
        for j in range (0,k):
            print(end=" ")
        k=k-1
        for j in range(0,i+1):
            print("hello",end=" ")
        print("\r")

#how much long you want height of the triangle
h=int(input("Enter height of the triangle"))
triangle(h)
