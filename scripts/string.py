txt = input('Enter some text: ')
alpha,digit,space = 0,0,0
for x in txt:
    if x.isalpha():alpha+=1
    elif x.isdigit():digit+=1
    elif x.isspace():space +=1
print('No. of Alphabets =',alpha)
print('No. of Digits =',digit)
print('No. of Spaces =',space)