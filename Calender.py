# This is how you can make a calender in python.
import calendar
# choose a year between 1 to 1000
try:
    y= int(input())
    if 1>y or y>1000:
        print("please choose another year")
    else:
        for i in range (12):
            print(calendar.month(y,i+1))
except:
    print("please choose a year of calendar")
