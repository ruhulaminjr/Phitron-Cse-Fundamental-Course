data = {
    "Name": "Ruhul",
    "Age": 19,
}
data["Hobby"] = "Traveling"
data["Sports"] = ["Football", "Cricket", "Video Games"]
numbers = [12, 4, 44, 22, 35, 65, 677, 54, 34]

for idx, num in enumerate(numbers):
    print(idx, num)

for key, val in data.items():
    print(key, val)

for key in data:
    val = data[key]
    print(val)
