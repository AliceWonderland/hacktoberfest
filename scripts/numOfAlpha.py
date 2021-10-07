

text = input("Enter text: ")
alpha,digit,space = 0,0,0
for x in text:
    if x.isdigit():
        digit+=1
    elif x.isspace():
        space+=1
    elif x.isalpha():
        alpha+=1
print('Number of Alphabets =',alpha)
print('Number of Digits =',digit)
print('Number of Spaces =',space)
