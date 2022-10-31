from abc import ABC, abstractmethod


class absVehical(ABC):

    @abstractmethod
    def start(self):
        print("Car Starting ")

    @abstractmethod
    def stop(self):
        print("Car Stopping ")


class Bike(absVehical):
    def isBike(self):
        print("This is Bike")

    def start(self):
        print("Bike is Starting ")

    def stop(self):
        print("Bike is Stopping")


my_bike = Bike()
my_bike.isBike()
my_bike.start()
