from abc import ABC, abstractmethod


# abcstact class canot be instanitiate
class Vehicle(ABC):
    @abstractmethod
    def go(self, name):
        pass


class car(Vehicle):
    def __init__(self, name):
        self.name = name

    def go(self, name):
        print(f"Vehicle name : {name} started")


c = car("Cng 2")
c.go("cng")
