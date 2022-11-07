from TravelAgent import TravelAgent


def main():
    trav_agent = TravelAgent("Jao Pakhi")
    trip_info1 = trav_agent.set_trip_one_city_one_way(
        'HEA', 'WKM', "02,05,2025")
    print(f"Price :{trip_info1.cost} \nAirCraft : {trip_info1.air_craft}")
    cities = ['Dha', "nyk", 'agg', 'europe']
    trav_agent.set_trip_multi_city_flexible(cities, '3/2/2021')


if __name__ == "__main__":
    main()
