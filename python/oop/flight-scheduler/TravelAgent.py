from air_lines import all_airCraft
from All_Airports import AllAirports
from Trip import Trip


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
        trip = Trip([start, end], price, aircraft, start_date, [start, end])
        return trip

    def set_trip_one_city_two_way(self, start, end, start_date, return_date):
        start_trip = self.set_trip_one_city_one_way(start, end, start_date)
        end_trip = self.set_trip_one_city_one_way(end, start, return_date)
        return [start_trip, end_trip]

    def set_trip_multi_city_one_way(self, trip_cities, start_date):
        trip_info = []
        for i in range(1, len(trip_cities)):
            trip = self.set_trip_one_city_one_way(
                trip_cities[i-1], trip_cities[i], start_date)
            trip_info.append(trip)

        return trip_info

    def set_trip_multi_city_round_way(self, trip_cities, start_date, return_date):
        start_trip_info = []
        for i in range(1, len(trip_cities)):
            trip = self.set_trip_one_city_two_way(
                trip_cities[i-1], trip_cities[i], start_date, return_date)
            start_trip_info.append(trip)
        return start_trip_info

    def __repr__(self):
        return f"TravelAgent Name : {self.name}"
