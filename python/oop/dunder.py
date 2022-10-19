class Person:
    def __init__(self, name, age, money, height=65):
        self.name = name
        self.age = age
        self.money = money
        self.height = height

    def __len__(self):
        return self.height

    def __add__(self, other):
        return self.money + other.money

    def __eq__(self, other):
        return self.money == other.money

    def __ne__(self, other):
        return self.money == self.money

    def __cmp__(self, other):
        if self.money > other.money:
            return 1
        elif self.money < other.money:
            return 0

    def __repr__(self):
        return f"{self.name} {self.height} "


ruhul = Person("Ruhul", 18, 999)
amin = Person("Amin", 19, 599)

print(ruhul != amin)

print(len(ruhul))
print(ruhul)
""" __cmp__(self, other)	সমস্ত কমপারিজন অপারেটরের বাপ।
__eq__(self, other) == অপারেটরের কাজ করে।
__ne__(self, other) != অপারেটরের কাজ করে।
__lt__(self, other) < অপারেটরের কাজ করে।
__gt__(self, other) > অপারেটরের কাজ করে।
__le__(self, other) <= অপারেটরের কাজ করে।
__ge__(self, other) >= অপারেটরের কাজ করে। """
""" 
মেথড	বর্ণনা
__add__(self, other) + অপারেটরের কাজ করে।
__sub__(self, other) - অপারেটরের কাজ করে।
__mul__(self, other) * অপারেটরের কাজ করে।
__div__(self, other) / অপারেটরের কাজ করে।
__mod__(self, other) % অপারেটরের কাজ করে।
__pow__ ** অপারেটরের কাজ করে।
__floordiv__(self, other) // অপারেটরের কাজ করে। """
