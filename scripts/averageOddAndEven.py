

odd,even,oddcount,evencount = 0,0,0,0
for x in range(1,11):
    text = "Enter number {}: ".format(x)
    n = int(input(text))
    if n%2 == 0:
        even+=n
        evencount+=1
    else:
        odd+=n
        oddcount+=1
print("Average of odd numbers =",odd,"/",oddcount,"=",(odd/oddcount))
print("Average of even numbers =",even,"/",evencount,"=",(even/evencount))

