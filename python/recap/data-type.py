name = "ruhul amin"
# string is a immutable data type
# print(name[0])
# this code gives me a error
# name[0] = "R"
# string slicing
# print(name[0:5])
# print(name[::-1])
# print(name[0::2])

# python list is mutable data type

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
# append element on a list
lst.append(10)
# print(lst)
# delete or po an element from a list
# lst.pop()
# nested lst
lst = [1, 2, 3, [10, 20, 30], 4, 5, 6, [40, 50, 60]]
# print(lst[::-1])
# print(lst[3][1])
# lst.pop(3)
# print(lst)
# python tupple

tp = (1, 2, 3, 4, 5, 6, 7, 8, 9, [3, 2, 1])
# print(tp)
tp[9][::] = [1, 2, 3]
# print(tp)

# list of tuple to dictionary convert
lstp = dict([(1, 2), (5, 6), (9, 10)])

# print(lstp)

dic = {"name": "ruhul", "age": 19}

# print(dic["name"])
# print(dic.get("name", False))
# print(dic.get("job", False))

# set only store unique data and set is unordered data type
setlst = set({1, 2, 3, 4, 5, 3, 2, 1})

# print(setlst)
