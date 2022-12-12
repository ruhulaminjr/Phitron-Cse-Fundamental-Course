
from functools import reduce

name = "Ruhul Amin"


def N(s): return s.upper()[::-1]


# print(name,N)
def mx(a, b): return a if(a > b)else b


print(max(mx(6, 4), 8))

lst = [2, 6, 8, 10, 12, 14, 13, 17, 15, 29]

double = [lambda arg=x: arg*2 for x in lst]

# for func in double:
#     print(func())

# map,filter,reduce

even = filter(lambda x: (x % 2 == 0), lst)

# print(list(even))

names = ['Ruhul', "Amin", "JR."]

revup = map(lambda s: s.upper()[::-1], names)

# print(list(revup))

# sub using reduce function

sumofnum = reduce(lambda a, b: a+b, lst)

print(sumofnum)
