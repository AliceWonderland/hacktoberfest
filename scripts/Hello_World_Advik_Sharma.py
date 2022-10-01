# Hello World Program
# Python 3.10
# Visual Studio Code

if __name__ == '__main__':
    print("Hello World!")

# Class For a person
class Person:
    def __init__(self, name):  # Constructor
        self.name = name
        
        
Bryan = Person("Clifton Berrington")  # Object from person class
print(Bryan.name)