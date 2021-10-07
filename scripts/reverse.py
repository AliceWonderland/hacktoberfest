txt = input('Enter some text: ')
reversed = []
for x in txt:
    reversed.insert(0,x)
print("Reversed string: ",''.join(reversed))