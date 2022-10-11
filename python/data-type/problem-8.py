""" Given is a nested tuple. Write a program to modify the first item(22) of a list inside a following tuple to 222

Given Tuple:
tuple1 = (11, [22, 33], 44, 55)

Expected Output:
(11, [222, 33], 44, 55)
 """

tuple1 = (11, [22, 33], 44, 55)
tuple1[1][0] = 222
print(tuple1)
""" Counts the number of occurrences of item 50 from a tuple
Hints: Search about count() function

Given Tuple:
tuple1 = (50, 10, 60, 70, 50)

Expected Output:
2 """


tuple1 = (50, 10, 60, 70, 50)
data = int(input("val : "))

print(tuple1.count(data))
