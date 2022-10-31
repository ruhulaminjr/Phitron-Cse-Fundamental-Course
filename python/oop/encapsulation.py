class Account:
    def __init__(self, holder, account_number, balance):
        self.holder = holder
        self.account_number = account_number
        self.__balance = balance  # __ is a private attribute syntex

    def addMoney(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        self.__balance -= amount

    def balance(self):
        return self.__balance


class StudentAccount(Account):
    def __init__(self, holder, account_number, balance, idx):
        self.idx = idx
        Account.__init__(self, holder, account_number, balance)


ruhul = StudentAccount("Ruhul Amin", 3242, 5000, 342)

# print(ruhul.__balance
print(ruhul.balance())
ruhul.addMoney(4545)
ruhul.addMoney(121212)
print(ruhul.balance())
