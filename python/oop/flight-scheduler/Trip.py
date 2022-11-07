class Trip:
    def __init__(self, trip_cities, cost, aircraft, trip_date, route=""):
        self.trip_cities = trip_cities
        self.trip_date = trip_date
        self.air_craft = aircraft
        self.cost = cost
        self.trip_route = route

    def __repr__(self):
        return f"Trip-cities : {self.trip_cities} Trip Date {self.trip_date}"
