print("program 34 - Letters in String")

string = input("Enter String: ")
letter = input("Enter letter: ")

count=0
for i in string.lower():
	if letter.lower() == i:
		count+=1
print("There are",count,letter,"'s in",string)