class Person:
    def __init__(self, name='Anonymous', location='India'):
        self.name = name
        self.place = location

    def greeting(self, name=None):
        name = name if name else self.name
        str = f"Hello, World! by {name}"
        print(str)
        return str


myself = Person('Divyam', 'Pune')


myself.greeting()
