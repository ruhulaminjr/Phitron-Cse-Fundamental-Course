class Device:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color

    def __repr__(self):
        return f"Name : {self.brand} Color : {self.color} Price : {self.price}"


class Mobile(Device):
    def __init__(self, brand, price, color):
        super().__init__(brand, price, color)

    def buy(self, money):
        if self.price < money:
            print("Your Can Buy Phone")
        else:
            print("You Can Not buy")


myPhone = Mobile("Samsung s10", 85400, "Black")

print(myPhone)
