class Bank:
    def __init__(self, name, balance,):
        self.name = name
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f"Minimum withdraw is {self.min_withdraw}")
        elif amount > self.max_withdraw:
            print(f"Maximum Withdraw is {self.max_withdraw}")
        elif amount > self.balance:
            print("Not Enough Balance in Your Bank Account")
        else:
            self.balance -= amount
            print(f"You Just got : {amount}")

    def deposite(self, amount):
        self.balance += amount
        print(f"Your New Balance is : {self.balance}")


my_bank = Bank("Ruhul", 15000)
my_bank.withdraw(110)
my_bank.deposite(99)
