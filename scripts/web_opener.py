#!/usr/bin/python

"""
Script to open a website with Selinium
"""


from selenium import webdriver
from time import sleep

def main():
    # Open the Site
    seite = str(input("Destination: "))


    # open the browser
    browser =  webdriver.Chrome("")

    # navigate to the Site
    try:
        browser.get("https://{}".format(seite))
            except Exception as exc:
        raise RuntimeError("cant open the Site") from exc
            else:
        broser.close()

        finally:
            print("Program executed")

     # let the page open for 5 seconds
    sleep(5)

     # close the browser
    browser.close()


 if __name__ == '__main__':
    main()