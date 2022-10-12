import pyautogui, random, time
pyautogui.FAILSAFE = False
list = [1,1,2,1,1,1,1,1,1,1]
while True:
    time.sleep(6)
    for i in range(0,random.choice(list)):
        pyautogui.hotkey("ctrl", "shift", "tab")
