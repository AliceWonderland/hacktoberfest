#Overcomplicated intentionally
def Hello():
    global hello
    hello = "Hello"
def World():
    global world
    world = "World"
def HW():
    print(hello,world)
    print("Saluton Mondo")
def main():
    Hello()
    World()
    HW()
if __name__ == '__main__':
    main()
    print("Yolo")