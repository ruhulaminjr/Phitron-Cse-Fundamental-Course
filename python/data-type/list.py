numbers = [12, 4, 44, 22, 35, 65, 677, 54, 34]
tools = ['C', 'c++', 'Java', 'Python', 'Javascript']
newTech = ['git','React Js','Node js','Django']

# list[start,end,step]
# print(numbers[3:7:1])
# print(numbers[-1::-1])

# list.append(x)
# Add an item to the end of the list. Equivalent to a[len(a):] = [x].
# numbers.append(999)
# numbers[len(numbers):] = [999]
# print(numbers)

# list.extend(iterable)
# Extend the list by appending all the items from the iterable. Equivalent to a[len(a):] = iterable.
# tools = ['C','c++','Java','Python','Javascript']
# newTech = ['git','React Js','Node js','Django']
# print(tools)
#  tools.extend(newTech)
# tools[len(tools):] = newTech
# print(tools)

# list.insert(i, x)
# Insert an item at a given position. The first argument is the index of the element before which to insert, so a.insert(0, x) inserts at the front of the list, and a.insert(len(a), x) is equivalent to a.append(x).

# numbers.insert(3,121212)
# print(numbers)

# list.remove(x)
# Remove the first item from the list whose value is equal to x. It raises a ValueError if there is no such item.
# numbers.remove(12)
# print(numbers)

# list.pop([i])
# Remove the item at the given position in the list, and return it. If no index is specified, a.pop() removes and returns the last item in the list. (The square brackets around the i in the method signature denote that the parameter is optional, not that you should type square brackets at that position. You will see this notation frequently in the Python Library Reference.)
# num = numbers.pop(2)
# print(num)

# list.clear()
# Remove all items from the list. Equivalent to del a[:].
# print(numbers)
# numbers.clear()
# print(numbers)