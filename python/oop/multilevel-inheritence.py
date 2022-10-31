class School:
    # constructor
    def __init__(self, school_name, address, principal):
        self.name = school_name
        self.address = address
        self.principal = principal
        self.grades = []

    def add_grades(self, name, teacher):
        newGrade = Grade(name, teacher)
        self.grades.append(newGrade)

    def __repr__(self):
        return f"Jamal obj"


class Grade:

    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher
        self.student = []


class Student(School, Grade):
    def __init__(self, name, idx, school_name, address, principal):
        self.idx = idx
        Grade.__init__(self, name, idx)
        School.__init__(self, school_name, address, principal)


jamal = Student("Ruhul", 4545, "mhk School", "ttd road", "rk khan")

print(jamal)
