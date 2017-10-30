# LANGUAGE: Python
# AUTHOR: Nikhil
# GITHUB: https://github.com/computelarge
print("Hello World!")
print("Hacktoberfest");
class BankAccount:
    
    balance = 0
    def withdraw(self, amount):
        self.balance -= amount
        return self.balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance

a = BankAccount()
b = BankAccount()
x = a.deposit(100)
print("Balance in a after deposit is : " ,x)
y = b.deposit(50)
print("Balance in b after deposit is : " ,y)
p = b.withdraw(10)
print("Balance in b after withdraw is : " ,p)
q = a.withdraw(10)
print("Balance in a after withdraw is : " ,q)
