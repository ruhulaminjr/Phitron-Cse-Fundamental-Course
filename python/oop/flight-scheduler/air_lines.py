from Aircraft import Aircraft
import csv


class all_airCraft:
    def __init__(self):
        self.all_aircraft = None
        self.load_aircraft("./data/aircraft.csv")

    def load_aircraft(self, csv_file):
        all_air_craft = {}
        with open(csv_file, 'r') as file:
            lines = csv.reader(file)
            next(lines)
            for line in lines:
                all_air_craft[line[0]] = Aircraft(
                    make=line[3], code=line[0], typ=line[2], flight_range=line[4])
            file.close()
        self.all_aircraft = all_air_craft

    def getAirLinesByDistance(self, distance):
        for aircraft in self.all_aircraft.values():
            if aircraft.flight_range > distance:
                return aircraft


all_airCraft()
