from TravelAgent import TravelAgent


def main():
    trav_agent = TravelAgent("Jao Pakhi")
    trip_info1 = trav_agent.set_trip_one_city_one_way(
        'HEA', 'WKM', "02,05,2025")
    print(f"Price :{trip_info1[0]} \nAirCraft : {trip_info1[1]}")


if __name__ == "__main__":
    main()
