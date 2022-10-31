from abc import ABC, abstractmethod
from time import sleep


class Vehicle(ABC):
    speed = {
        'car': 30,
        'cng': 20,
        'bike': 50
    }

    def __init__(self, vehicle_type, plate, rate, driver):
        self.vehicle_type = vehicle_type
        self.plate = plate
        self.speed = self.speed[vehicle_type]
        self.rate = rate
        self.driver = driver
        self.status = "available"

    @abstractmethod
    def start_driving(self):
        self.status = "unavailable"
        pass

    @abstractmethod
    def trip_finished(self):
        self.status = "available"
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, plate, rate, driver):
        super().__init__(vehicle_type, plate, rate, driver)

    def start_driving(self, start, destination):
        print(self.vehicle_type, self.plate, "Started")
        self.status = "unavailable"
        dis = abs(start - destination)
        print("trip started", start, destination)
        for i in range(0, dis):
            sleep(0.5)
            print(
                f"Vehical {self.vehicle_type} Driving PlateNo. {self.plate} from {start} to {destination} Now On {i}\n")
        print(f"Car No . {self.plate} Trip Finished ")
        self.trip_finished()

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, self.plate, "Trip Finished")


class Bike(Vehicle):
    def __init__(self, vehicle_type, plate, rate, driver):
        super().__init__(vehicle_type, plate, rate, driver)

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, self.plate, "Trip Finished")

    def start_driving(self, start, destination):
        print(self.vehicle_type, self.plate, "Started")
        self.status = "unavailable"
        dis = abs(start - destination)
        print("trip started", start, destination)
        for i in range(0, dis):
            sleep(0.5)
            print(
                f"Vehical {self.vehicle_type} Driving PlateNo. {self.plate} from {start} to {destination} Now On {i}\n")
        print(f"Car No . {self.plate} Trip Finished ")
        self.trip_finished()


class Cng(Vehicle):
    def __init__(self, vehicle_type, plate, rate, driver):
        super().__init__(vehicle_type, plate, rate, driver)

    def start_driving(self, start, destination):
        print(self.vehicle_type, self.plate, "Started")
        self.status = "unavailable"
        dis = abs(start - destination)
        print("trip started", start, destination)
        for i in range(0, dis):
            sleep(0.5)
            print(
                f"Vehical {self.vehicle_type} Driving PlateNo. {self.plate} from {start} to {destination} Now On {i}\n")
        print(f"Car No . {self.plate} Trip Finished ")
        self.trip_finished()

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, self.plate, "Trip Finished")
