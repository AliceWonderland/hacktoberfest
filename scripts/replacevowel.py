txt,mod = input('Enter some text: '),""
for x in txt:
    if x in 'aeiouAEIOU':mod += '*'
    else:mod += x
print('Modified string =',mod)