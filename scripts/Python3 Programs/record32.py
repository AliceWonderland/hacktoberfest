print("program 32 - Vowels and Non-Vowels")

string = input("Enter string: ")
vowel = 0
nonvowel = 0
spaces = 0

for i in string.lower():
	if (i == 'a') or (i == 'e') or (i == 'i') or (i == 'o') or (i == 'u'):
		vowel+=1
	elif i == ' ':
		spaces+=1
	else:
		nonvowel+=1

print("Vowels : ",vowel)
print("Non-Vowels : ",nonvowel)