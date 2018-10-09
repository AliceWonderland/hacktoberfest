# Input these in seperate lines.
#  First enter your height in metres.
# Then enter your weight in kilograms.

Height=float(input())
Weight=int(input())

BMI=Weight/Height**2

if BMI<18:
   print(BMI)
   print('You are underweight, eat more.')
elif BMI==18:
    print(BMI)
    print('Good You have a perfect weight but eat a bit more')
elif BMI>18 or  BMI<25:
    print(BMI)
    print('You have absolutely fine weight, no need to worry.')
elif BMI>25:
    print(BMI)
    print('You are overweight, start dieting')
else :
    print('Put valid Input')

print('Done!')
