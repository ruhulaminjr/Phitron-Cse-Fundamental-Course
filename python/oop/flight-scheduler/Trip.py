class Trip:
    def __init__(self, trip_cities, trip_date):
        self.trip_cities = trip_cities
        self.trip_date = trip_date
        self.air_craft = None
        self.cost = None
        self.trip_route = None

    def __repr__(self):
        return f"Trip-cities : {self.trip_cities} Trip Date {self.trip_date}"
