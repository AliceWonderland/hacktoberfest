def is_leap(year):
    leap = False
    limit = pow(10, 5)

    if 1900 <= year and year <= limit:
        if (year % 4) == 0:
            if year % 100 != 0 or year % 400 == 0:
                leap = True
            else:
                leap = False

    return leap


year = int(input())
print(is_leap(year))
