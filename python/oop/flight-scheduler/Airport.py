class Airport:
    def __init__(self, idx, code, name, city, country, lat, lon, rate):
        self.idx = idx
        self.code = code
        self.name = name
        self.city = city
        self.country = country
        self.lat = float(lat)
        self.lon = float(lon)
        self.rate = float(rate)

    def __repr__(self):
        return f"Airport Name : {self.name}  Country : {self.country} Latitute {self.lat} longitute {self.lon} Rate : {self.rate}"
