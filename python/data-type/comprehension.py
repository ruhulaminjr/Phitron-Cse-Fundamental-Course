numbers = [12, 4, 44, 22, 35, 65, 677, 54, 34]

smallNum = [num for num in numbers if num < 30]
print(smallNum)

names = ["Apple", "Orange", "Banana"]
qty = [8, 4, 12]
pairs = [(name, qt) for name in names for qt in qty]
print(pairs)
