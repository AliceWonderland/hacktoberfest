print("program 36 - Count number of Words in given Sentence")

string = input("Enter Sentence: ")
count=1

for i in string:
	if i == " ":
		count+=1
print("There is",count,"words in the given sentence.")