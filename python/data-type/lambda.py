numbers = [12, 4, 44, 22, 35, 65, 677, 54, 34]
def doubleNum(num): return num * 2


# newNum = []
# for i in numbers:
#     newNum.append(doubleNum(i))
newNum = map(lambda x: x*2, numbers)
# print(list(newNum))
evenNum = filter(lambda x: x % 2 == 0, numbers)
oddNum = filter(lambda x: x % 2 != 0, numbers)
# print(list(oddNum))

player = [{"Name": "Babor Azam", "Age": 27}, {
    "Name": "Moeen Ali", "Age": 32}, {"Name": "Jos Butler", "Age": 31}]

youngPlayer = filter(lambda pl: pl["Age"] < 30, player)

print(list(youngPlayer))
