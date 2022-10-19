class User:
    def __init__(self, f_name, l_name):
        self.full_Name = f"{f_name} {l_name}"
        self.email = f"{f_name}.{l_name}@mail.com"
    # python getter decorator

    @property
    def getDetails(self):
        return f"Name : {self.full_Name}\nEmail : {self.email}"

    @property
    def fullName(self):
        return self.full_Name

    @fullName.setter
    def fullName(self, name):
        first, last = name.split(" ")
        self.full_Name = f"{first} {last}"

    @fullName.deleter
    def fullName(self):
        del self.full_Name


ruhul = User("Ruhul", "Amin")
print(ruhul.full_Name)
print(ruhul.email)
print(ruhul.getDetails)
ruhul.fullName = "Tom Hanks"
print(ruhul.getDetails)
del ruhul.fullName
print(ruhul.getDetails)
