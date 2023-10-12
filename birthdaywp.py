# get current date in required format
import datetime

# store the birthdates of your contacts
import json

from selenium import webdriver

# add a delay so that all elements of
# the webpage are loaded before proceeding
import time

# Global variable Do not use elsewhere
eleNM = None

# This function is just to return a 
# string of the message required
def wish_birth(name):
	return "Happy Birthday " + name.split(" ")[0] + "!!"

# This function returns a list of values of some 
# attribute based on conditions on two attributes from the JSON file.
# use to return names of contacts having their birthday on current date.
def getJsonData(file, attr_ret, attr1, attr2, attr_val1, attr_val2):
	
	# Load the file's data in 'data' variable
	data = json.load(file)
	retv =[]

	# If the attributes' value conditions are satisfied, 
	# append the name into the list to be returned.
	for i in data:
		if(i[attr1]== attr_val1 and i[attr2]== attr_val2):
		retv.append(i[attr_ret])
	return retv

# Opening the JSON file (birthdays.json) in read only mode.
data_file = open("birthdays.json", "r")
namev =[]
print("Script Running")

# This will keep rerunning the part of 
# the code from 'while True' to 'break'.
# use to keep waiting for the JSON function
# to return a non empty list.
# In practice, this function will keep rerunning at 
# 11:59pm a day before the birthday and break out at 12:00am.
while True:
	try:
		# to get current date
		datt = datetime.datetime.now()
		namev = getJsonData(data_file, "name", "birth_month", "birth_date",
										str(datt.month), str(datt.day))

	except json.decoder.JSONDecodeError:
		continue
	if(namev !=[]):
		break

# ChromeOptions allows us use the userdata of chrome
# so that you don't have to sign in manually everytime.
chropt = webdriver.ChromeOptions()

# adding userdata argument to ChromeOptions object
chropt.add_argument("user-data-<LOCATION TO YOUR CHROME USER DATA>")

# Creating a Chrome webdriver object
driver = webdriver.Chrome(executable_path ="<LOCATION TO CHROME WEBDRIVER>", 
														options = chropt)
driver.get("https://web.whatsapp.com/")

# delay added to give time for all elements to load
time.sleep(10)

print(namev)

# Finds the chat of your contacts (as in the namev list)
for inp in namev:
	try:
		eleNM = driver.find_element_by_xpath('//span[@title ="{}"]'.format(inp))
	except Exception as ex:
		print(ex)
		continue
	# Simulates a mouse click on the element
	eleNM.click()

	while(True):
		# Finds the chat box element
		eleTF = driver.find_element_by_class_name("_13mgZ")
		# Writes the message(function call to wish_birth())
		eleTF.send_keys(wish_birth(inp))
		# Finds the Send button
		eleSND = driver.find_element_by_class_name("_3M-N-")
		# Simulates a click on it
		eleSND.click()
		break
