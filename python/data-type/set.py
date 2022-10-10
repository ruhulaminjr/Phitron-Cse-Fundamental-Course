num = [1, 2, 1, 2, 3, 4, 3, 4, 5, 6, 5, 6]
# print(num)
numSet = set(num)
numset2 = {56, 34, 34, 56, 22, 33, 22, 33}
# print(numSet)
# print(numset2)
numSet.add(99)
# listset = {[56,78],[78,56],[56,78]}
# this line unhashable
# print(numSet)

# acces set item

# print(numSet[2])
# You cannot access items in a set by referring to an index or a key.

# But you can loop through the set items using a for loop, or ask if a specified value is present in a set, by using the in keyword.
charSet = {'R', 'U', 'H', 'U', 'L'}
numSet.remove(99)
# for i in numSet:
#     print(i)

mixSet = numSet.union(charSet)
print(mixSet)
