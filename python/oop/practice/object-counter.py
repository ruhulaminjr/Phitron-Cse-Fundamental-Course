class Car:
    counter = 0

    def __init__(self, name, color):
        self.name = name
        self.color = color
        Car.counter += 1

    def details(self):
        print(f"Car Name: {self.name} Car Color : {self.color}")


car1 = Car("Bmw", "Black")
car2 = Car("Apache", "Blue")
car1.details()
car2.details()
print(Car.counter)
