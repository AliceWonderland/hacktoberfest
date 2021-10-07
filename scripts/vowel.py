
text = input("Enter text: ")
mod = ""
for x in text:
    if x in "aeiouAIEOU":
        mod+="*"
    else:
        mod+=x
print('Modified text: ',mod)
