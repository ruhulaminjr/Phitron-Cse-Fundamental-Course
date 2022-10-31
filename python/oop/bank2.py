import time


class Account:
    accId = 991

    def __init__(self, name, balance, depo):
        self.name = name
        self.balance = balance
        self.depo = depo
        self.accId = Account.accId
        Account.accId += 1

    def deposite(self, money):
        if money > 0:
            self.balance += money
            print(f"Deposite {money}.Tk Succssefull")
        else:
            print("Something went Wrong")

    def withdraw(self, money):
        if money > self.balance:
            self.balance - + money
            print(f"Withdraw {money}.TK Successfull")
        else:
            print("Something went Wrong")

    def getBalance(self):
        print(f"Your Balance : {self.balance+self.depo}")

    def __del__(self):
        print(f"Your get Balance {self.balance} Your Account Cost {self.depo}")


acc1 = Account("Ruhul", 899, 500)
acc2 = Account("Amin", 755, 500)
del acc1
del acc2
# print(acc1.accId)
# print(acc2.accId)

time.sleep(3)
