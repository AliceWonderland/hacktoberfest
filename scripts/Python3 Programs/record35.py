print("program 35 - Swap First 2 characters of 2 Strings")

string1 = input("Enter First String: ")
string2 = input("Enter Second String: ")

new = ''
new = string2[0:2]+string1[2:]+" "+string1[0:2]+string2[2:]
print (new)