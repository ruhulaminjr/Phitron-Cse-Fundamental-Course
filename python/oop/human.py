class Human:
    def __init__(self, name, weight, height, gender):
        self.name = name
        self.weight = weight
        self.height = height
        self.gender = gender


class Police(Human):
    def __init__(self, name, weight, height, gender, nationality, cases):
        super().__init__(name, weight, height, gender)
        self.nationallitly = nationality
        self.cases = cases


class cseDeveloper(Human):
    def __init__(self, name, weight, height, gender, has_gf=False,):
        super().__init__(name, weight, height, gender)
        self.has_gf = bool(has_gf)


if __name__ == "__main__":
    cseDev = cseDeveloper("Ruhul", 55, 65, "male", True)
    print(cseDev.name)
    print(cseDev.has_gf)
