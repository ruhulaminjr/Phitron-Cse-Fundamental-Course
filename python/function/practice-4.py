""" Given a two Python list. Write a program to iterate both lists simultaneously and display items from list1 in original order and items from list2 in reverse order
Hints: Search google about zip() function

Sample Input:
list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]

Sample Output:
10 400
20 300
30 200
40 100
 """


def printTwiList(list1, list2):
    list2.sort(reverse=True)
    newList = list(zip(list1, list2))
    for el in newList:
        print(el[0], el[1])


list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]

printTwiList(list1, list2)
