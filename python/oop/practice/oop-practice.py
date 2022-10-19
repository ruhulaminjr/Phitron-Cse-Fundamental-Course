""" 1. Create a class with instance attributes.

Use this code below to practice 2, 3, 4, 5 and 6:


class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity


class Bus(Vehicle):
    pass


School_bus = Bus("School Volvo", 12, 50)


2. Check the type of the object school_bus
3. Check if School_bus is also an instance of the Vehicle class.
4. Define a property that must have the same value for every class instance (object)
5. Write getter and setter methods for Vehicle class.
6. Add an __str__ method to the code.
7. Learn about inheritance and classifications of inheritance, try to implement those in your code.
8. Encapsulate your previous code, any code you have written before. Reach us if you face any errors.
 """


class Vehicle:
    Power = "Electricity"

    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity
        self.color = "black"

    @property
    def getColor(self):
        return self.color

    @getColor.setter
    def getColor(self, val):
        self.color = val

    @getColor.deleter
    def getColor(self):
        del self.color

    def __str__(self):
        return f"Name : {self.name} mileage : {self.mileage} color : {self.color}"


class Bus(Vehicle):
    pass


School_bus = Bus("School Volvo", 12, 50)

# print(type(School_bus))
print(isinstance(School_bus, Vehicle))
print(School_bus.Power)
print(School_bus.getColor)
School_bus.getColor = "Yellow"
print(School_bus.getColor)
print(School_bus)
