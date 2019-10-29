# hello_world - Luca Gouveia

hi = ""
value = 72

for i in range(5):
    
    if i == 0:
        hi += chr(value)
    elif i == 1:
        value -= 3
        hi += chr(value)    
    elif i == 4:
        value += 3
        hi += chr(value)
    else:
        value = 76
        hi += chr(value)

print(hi+" WORLD!")