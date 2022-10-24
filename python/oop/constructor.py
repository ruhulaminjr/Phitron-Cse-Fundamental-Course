class School:
    # constructor
    def __init__(self, name, address, principal):
        self.name = name
        self.address = address
        self.principal = principal
        self.grades = []

    def add_grades(self, name, teacher):
        newGrade = Grade(name, teacher)
        self.grades.append(newGrade)

    def __repr__(self):
        return f""


class Grade:

    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher
        self.student = []

    def add_student(self, name, idx):
        newSt = Student(name, idx)
        self.student.append(newSt)


class Student:
    def __init__(self, name, idx):
        self.name = name
        self.idx = idx


oxford = School("Oxford Bd", "Jamalpur Sadar", "Dr. Tpu Khan")

oxford.add_grades("class 5", "Jamal Sir")

print(oxford.grades)
