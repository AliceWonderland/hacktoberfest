'''
DOCSTRING: THIS PROGRAM RETURNS THE PRIME FACTORS OF A GIVEN NUMBER
'''

#FUNCTION TO CHECK PRIME
def check_prime(num):
    '''
    DOCSTRING: CHECK IF A NUMBER IS PRIME OR NOT
    '''

    for number in range(2, num):
        if num%number == 0:
            return False
    return True

#FUNCTION TO GET THE PRIMES IN A GIVEN NUMBER
def prime_factorise(num):
    '''
    DOCSTRING: THIS FUNCTION PRIME FACTORISES THE GIVEN NUMBER
    '''

    prime_list = []
    last_factor = False
    while not last_factor:
        for i in range(2, num+1):
            if check_prime(i) and num%i == 0:
                prime_list.append(i)
                num = int(num/i)
                break
        else:
            last_factor = True
    return prime_list

#TAKE USER INPUT AND HANDLING EXCEPTIONS
while True:
    try:
        USER_INPUT = int(input("Enter a number to prime factorise: "))
    except ValueError:
        print("Please enter an integer only.")
        continue
    else:
        break

#RUN THE PROGRAM
OUTPUT_LIST = prime_factorise(USER_INPUT)
print(OUTPUT_LIST)
