from air_lines import all_airCraft
from All_Airports import AllAirports


class TravelAgent:
    def __init__(self, name):
        self.name = name
        self.trips = None
        self.all_airlines = all_airCraft()
        self.all_airports = AllAirports()

    def set_trip_one_city_one_way(self, start, end, start_date):
        price = self.all_airports.getTicketPrice(start, end)
        distance = self.all_airports.airportDistance(start, end)
        print("Trip Distance : ", distance)
        aircraft = self.all_airlines.getAirLinesByDistance(distance)
        return [price, aircraft]

    def set_trip_one_city_two_way(self):
        pass

    def set_trip_multi_city_one_way(self):
        pass

    def set_trip_multi_city_round_way(self):
        pass

    def __repr__(self):
        return f"TravelAgent Name : {self.name}"
