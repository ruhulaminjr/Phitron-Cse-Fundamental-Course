class Person:
    def __init__(self, name, number, age):
        assert len(number) == 11, f"Your Given {number} is invalid "
        assert age > 0, f"Age Cannot be less than {age}"
        assert len(name) >= 3, f"Name is Must Be 3 Character"
        self.name = name
        self.number = number
        self.age = age


man1 = Person("Ruhul", "01712712711", 12)

print(man1.__dict__)
