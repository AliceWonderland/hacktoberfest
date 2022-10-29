#A python program to shut down your computer.
import os
shutdown = input("Do you want to shutdown your computer (yes / no): ")
if shutdown == 'yes':
    os.system("shutdown /s /t 1")
else:
    print('Shutdown is not requested')

    
    
#A program to print a calendar of the specified month and year.
#Python has a built-in module, the calendar, which helps to access a record of the calendar. There are many methods in this module, in this program, we are trying to print the calendar of the specified month of a given year.

import calendar
year =int( input("Enter the year of the required calendar "))
month = int( input("Enter the month of the required calendar "))
print(calendar.month(year,month))


#A program to present the monthly expenses in a pie chart with percentage.
#In this program, we use matplotlib to represent the pie chart. This library can be installed using pip install matplotlib. With this module, many animated statics and interactive visuals can be programmed in python.

import matplotlib.pyplot as plt
Partition = 'Holidays', 'Eating_Out', 'Shopping', 'Groceries'
sizes = [250, 100, 300, 200]
fig1, ax1 = plt.subplots()
ax1.pie(sizes, labels=Partition, autopct='%1.1f%%', shadow=True, startangle=90)         
ax1.axis('equal')
plt.show()


#A program to check the internet upload and download speed with python.
#In this program, to check the internet speed we use the speedtest module. To install this package use pip install speedtest-cli syntax.

import speedtest
speed = speedtest.Speedtest()
download_speed = speed.download()
upload_speed = speed.upload()
print(f'The download speed is {download_speed}')
print(f'The uplaod speed is {upload_speed}')                                          


