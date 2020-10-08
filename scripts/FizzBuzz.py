# FizzBuzz in python using nested if else
# Author - @hritikchaturvedi11

for i in range(1,100):
    if(i % 3 == 0 and i % 5 == 0):
        print('FizzBuzz')
    elif(i % 3 == 0):
        print('Fizz')
    elif(i % 5 == 0):
        print('Buzz')
    else:
        print(i)
