names = ["Apple", "Orange", "Banana", "Grape"]


def get_fruit():
    for food in names:
        yield food


myfood = get_fruit()
try:
    print(next(myfood))
    print(next(myfood))
    print(next(myfood))
    print(next(myfood))
    print(next(myfood))
    print(next(myfood))
except StopIteration:
    print("No More Food Found")
