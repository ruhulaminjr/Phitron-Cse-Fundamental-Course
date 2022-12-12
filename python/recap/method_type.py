# class method
# instans method
# static method

class School:
    # class attribute
    school_name = "ABC School"

    def __init__(self, name):
        # instance attribute
        self.name = name

    @classmethod
    def changeName(cls, name):
        cls.school_name = name
        print(cls.school_name)

    def getName(self, name):
        self.school_name = name
        print(self.school_name)

    @staticmethod
    def greet():
        print("Hello From School Class")


s = School("rmd school")
s.changeName("EFGH School")
s.getName("z School")

print(School.school_name)
School.greet()