import csv
with open("./data/countryrates.csv", "r") as file:
    lines = csv.reader(file)
    for line in lines:
        if "Bangladesh" in line[0]:
            print("50 Usd to Bdt : ", float(line[3]) * 50)
            print("5000 Bdt To Usd", float(line[2]) * 5000)
            print(line)
