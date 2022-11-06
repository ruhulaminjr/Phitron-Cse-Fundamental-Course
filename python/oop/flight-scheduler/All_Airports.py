import csv
from Airport import Airport
from math import sin, cos, sqrt, atan2, radians


class AllAirports:
    def __init__(self):
        self.load_airports('./data/airport.csv')

    def load_airports(self, file_path, encoding="utf8"):
        all_airports = {}
        country_code = {}
        currency = {}
        # find the country Code
        with open("./data/countrycurrency.csv", "r") as file:
            lines = csv.reader(file)
            header = next(lines)
            for line in lines:
                country_code[line[0]] = line[1]
            # print(country_code['Afghanistan'])
            # print(header)
            file.close()

        with open("./data/countryrates.csv", "r") as file:
            lines = csv.reader(file)
            for line in lines:
                currency[line[1]] = line[2]
            file.close()
        # print(currency)
        with open(file_path, 'r') as file:
            allData = csv.reader(file)
            for data in allData:
                try:
                    code = country_code[data[3]]
                    rate = currency[code]
                    all_airports[data[4]] = Airport(
                        idx=data[0], code=data[4], name=data[1], city=data[2], country=data[3], lat=data[6], lon=data[7], rate=rate)
                except KeyError as e:
                    print("Error happen", e)
            file.close()

        self.all_airports = all_airports
        # for airport in all_airports.items():
        #     print(airport)

    def calculateAirportDistance(self, lat1, lon1, lat2, lon2):
        # approximate radius of earth in km
        R = 6373.0
        lat1 = radians(52.2296756)
        lon1 = radians(21.0122287)
        lat2 = radians(52.406374)
        lon2 = radians(16.9251681)

        dlon = lon2 - lon1
        dlat = lat2 - lat1

        a = sin(dlat / 2)**2 + cos(lat1) * cos(lat2) * sin(dlon / 2)**2
        c = 2 * atan2(sqrt(a), sqrt(1 - a))

        distance = R * c
        return distance

    def airportDistance(self, aiport1_code, airport2_code):
        airport1 = self.all_airports[aiport1_code]
        airport2 = self.all_airports[airport2_code]
        distance = self.calculateAirportDistance(
            lat1=airport1.lat, lon1=airport1.lon, lat2=airport2.lat, lon2=airport2.lon)
        return distance

    def getTicketPrice(self, start, end):
        airport_1 = self.all_airports[start]
        distance = self.airportDistance(start, end)
        fare = distance * airport_1.rate
        return fare


TravelAgency = AllAirports()

fare = TravelAgency.getTicketPrice('HEA', 'WKM')

print(f"Ticket Fare is : {fare}")
