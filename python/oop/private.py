class Account:
    def __init__(self, name, password):
        self.name = name
        self.__password = password

    def user_login(self, name, password):
        if name == self.name and password == self.__password:
            print("Login Successful")
        else:
            print("Incorrect User Or Password")


ruhul = Account("Ruhul", "123456")

ruhul.user_login("Ruhul", "123adf")

ruhul.user_login("ruhul", "123456")

ruhul.user_login("Ruhul", "123456")
