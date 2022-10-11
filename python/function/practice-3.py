""" Write a program to add two lists index-wise. Create a new list that contains the 0th index item from both the list, then the 1st index item, and so on till the last element. any leftover items will get added at the end of the new list

Sample Input:
list1 = ["M", "na", "i", "Bo"]
list2 = ["y", "me", "s", "nd"]

Sample Output:
['My', 'name', 'is', 'Bond']
 """


def mergeList(list1, list2):
    n1 = len(list1)
    n2 = len(list2)
    i = 0
    newlist = []
    while(i < n1 and i < n2):
        el = list1[i] + list2[i]
        newlist.append(el)
        i += 1
    while(i < n1):
        newlist.append(list1[i])
        i += 1
    while(i < n2):
        newlist.append(list2[i])
        i += 1
    return newlist


list1 = ["M", "na", "i", "Bo"]
list2 = ["y", "me", "s", "nd", " I", "Proggrammer"]

result = mergeList(list1, list2)
# result = zip(list1,list2)
print(list(result))
