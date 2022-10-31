# method overriding polymorphism
class Animal:
    def __init__(self, name):
        self.name = name

    def sound(self):
        print("Animal Making Sound")


class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def sound(self):
        print("Bark Geu Geu")


class Goat(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)

    def sound(self):
        print("May may may")


class Cat(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)

    def sound(self):
        print("mewo meow meow")


animals = []
animals.append(Dog("Shepard"))
animals.append(Cat("Tom"))
animals.append(Goat("Jerry"))

for animal in animals:
    animal.sound()


# operator overriding plymorphism
class Bank:
    def __init__(self, name, balance):
        self.name = name
        self.__balance = balance

    def __add__(self, other):
        return self.__balance + other.__balance

    @property
    def getBalance(self):
        return self.__balance

    @property
    def myname(self):
        return self.name

    @myname.deleter
    def myname(self):
        del self.name


bank1 = Bank("ruhul", 3434)
bank2 = Bank('Amin', 1111)

print(bank1+bank2)

print(bank1.myname)
print(bank2.myname)
del bank2.myname
print(bank1.myname)
print(bank2.myname)
