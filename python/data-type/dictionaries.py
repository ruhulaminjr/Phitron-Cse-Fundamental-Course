data = {
    "Name": "Ruhul",
    "Age": 19,
}
print(data)

data["Hobby"] = "Traveling"
data["Sports"] = ["Football", "Cricket", "Video Games"]

print("Favourite Sports is : ")

for sp in data["Sports"]:
    print(sp, end=" ")
print()

allKeys = data.keys()
allValues = data.values()
print(allKeys, allValues)
