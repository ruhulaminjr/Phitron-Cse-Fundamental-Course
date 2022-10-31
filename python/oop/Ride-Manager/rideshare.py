import hashlib
from random import choice, choices, randint
import threading

from ridemanager import Uber
from brta import BRTA
from vehicle import Bike, Car, Cng

authority = BRTA()


class Users:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        users_pwd = hashlib.sha256(password.encode()).hexdigest()
        Flag = False
        with open("users.txt", 'r') as file:
            if email in file.read():
                Flag = True
        if Flag == False:
            with open("users.txt", "a") as file:
                data = f"{email} {users_pwd}\n"
                file.writelines(data)
                file.close()

    @staticmethod
    def login(email, password):
        user_pwd = ""
        with open("users.txt", "r") as file:
            for line in file.readlines():
                if email in line:
                    user_pwd = line.split(" ")[1]
                    break
        given_pwd = hashlib.sha256(password.encode()).hexdigest() + "\n"
        if user_pwd == given_pwd:
            print("Valid Users ")
        else:
            print("invalid Users")


class Riders(Users):
    def __init__(self, name, email, password, location, balance):
        self.location = location
        self.balance = balance
        self.__tripInfo = []
        super().__init__(name, email, password)

    def start_a_trip(self, fare, tripinfo):
        self.balance -= fare
        self.__tripInfo.append(tripinfo)

    def get_trip_info(self):

        return self.__tripInfo


class Drivers(Users):
    def __init__(self, name, email, password, location, licence):
        self.location = location
        self.licence = licence
        self.valid_driver = authority.validate_licence(email, licence)
        self.earning = 0
        super().__init__(name, email, password)
        self.__tripInfo = []
        self.Vehicle = None

    def register_a_vehicle(self, vehicle_type, licenese_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                self.Vehicle = Car(vehicle_type, licenese_plate,
                                   rate, self)
                Uber.add_a_vehicle(vehicle_type, self.Vehicle)
            elif vehicle_type == 'bike':
                self.Vehicle = Bike(vehicle_type, licenese_plate,
                                    rate, self)
                Uber.add_a_vehicle(vehicle_type, self.Vehicle)

            else:
                self.Vehicle = Cng(vehicle_type, licenese_plate,
                                   rate, self)
                Uber.add_a_vehicle(vehicle_type, self.Vehicle)

    def take_driving_test(self):
        result = authority.take_driving_test(self.email)
        if result == False:
            self.valid_driver = False
        else:
            self.valid_driver = True
            self.licence = result

    def get_location(self):
        return self.location

    def request_a_strip(self, destination):
        pass

    def start_a_trip(self, start, destination, fare, info):
        self.location = destination
        self.earning += fare
        self.__tripInfo.append(info)
        multiThread = threading.Thread(
            target=self.Vehicle.start_driving, args=(start, destination,))
        # self.Vehicle.start_driving(start, destination)
        multiThread.start()

    def get_trip_info(self):
        return self.__tripInfo


vehicle_types = ['car', 'bike', 'cng']
rider1 = Riders("rider1", 'rider1@gmail.com', "rider1", randint(1, 50), 9999)
rider2 = Riders("rider2", 'rider2@gmail.com', "rider2", randint(1, 50), 999)
rider3 = Riders("rider3", 'rider3@gmail.com', "rider3", randint(1, 50), 999)
for i in range(1, 50):
    driver1 = Drivers(f'driver{i}', f'driver{i}@gmail.com', f'driver{i}',
                      randint(1, 100), randint(5000, 9999))
    driver1.take_driving_test()
    driver1.register_a_vehicle(choice(vehicle_types), randint(1, 1000), 30)
    # Users.login(driver1.email, f'driver{i}')

print(len(Uber.get_vehicle()))

Uber.find_a_vehicle(choice(vehicle_types), rider1, randint(1, 50))
Uber.find_a_vehicle(choice(vehicle_types), rider2, randint(1, 50))
Uber.find_a_vehicle(choice(vehicle_types), rider3, randint(1, 50))


print(rider1.get_trip_info())
