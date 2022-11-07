class Aircraft:
    def __init__(self, make, code, typ, flight_range):
        self.make = make
        self.code = code
        self.typ = typ
        self.flight_range = float(flight_range)

    def getMaker(self):
        return self.make

    def get_flight_range(self):
        return self.flight_range

    def __repr__(self):
        return f"AirCraft Maker : {self.make} Code : {self.code} Type : {self.typ} Flight-Range : {self.flight_range}"
