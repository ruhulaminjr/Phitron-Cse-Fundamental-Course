class Airport:
    def __init__(self, name, country, lat, lon, rate):
        self.name = name
        self.country = country
        self.lat = lat
        self.lon = lon
        self.rate = rate

    def __repr__(self):
        return f"Airport Name : {self.name}  Country : {self.country} Latitute {self.lat} longitute {self.lon}"
