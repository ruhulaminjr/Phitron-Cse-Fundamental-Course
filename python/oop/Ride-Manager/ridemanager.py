class RideManager:
    def __init__(self):
        print("Ride manager Activate")
        self.__available_car = []
        self.__available_bike = []
        self.__available_cng = []
        self.__income = 0
        self.__triphistory = []

    def get_income(self):
        return self.__income

    def get_trip_history(self):
        return self.__triphistory

    def add_a_vehicle(self, vehicle_type, vehicle):
        if vehicle_type == 'car':
            self.__available_car.append(vehicle)
        elif vehicle_type == 'bike':
            self.__available_bike.append(vehicle)
        else:
            self.__available_cng.append(vehicle)

    def get_vehicle(self):
        return [self.__available_bike, self.__available_car, self.__available_cng]

    def find_a_vehicle(self, vehicle_type, rider, destination):
        # print("vehicle type : ", vehicle_type)
        if vehicle_type == "car":
            vehicles = self.__available_car
        elif vehicle_type == "bike":
            vehicles = self.__available_bike
        else:
            vehicles = self.__available_cng
        if len(vehicles) == 0:
            print("No available Car For You")
            return False
        for car in vehicles:
            if(abs(car.driver.location - rider.location) < 33):
                fare = abs(car.driver.location - destination) * car.rate
                if (rider.balance < fare):
                    print(
                        f"You do not have enough Balance {rider.balance} cost {fare}")
                    return False
                if car.status == "available":
                    car.status = "unavailable"
                    trip_info = f"Found Car for {rider.name} and Driver Name : {car.driver.name} started: {rider.location} to {destination} Cost : {fare}"
                    rider.start_a_trip(fare, trip_info)
                    vehicles.remove(car)
                    car.driver.start_a_trip(
                        rider.location,
                        destination, fare*0.8, trip_info)
                    self.__income += fare*0.2
                    trip_info = f"Found Car for {rider.name} and Driver Name : {car.driver.name} started: {rider.location} to {destination} Cost : {fare}"
                    self.__triphistory.append(trip_info)

                    return True


Uber = RideManager()
