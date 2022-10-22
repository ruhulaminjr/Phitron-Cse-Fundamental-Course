""" 4. Write a python program for the requirement below. Notice the output must be in sorted order -
Input: x3b4U5i2
Output: bbbbiiUUUUUxxx
 """

s = input("Input: ")

length = len(s)

newDict = {}
for i in range(0, length-1, 2):
    # print(s[i])
    newDict[s[i+1]] = s[i]

newStr = ""

for key, val in newDict.items():
    for i in range(0, int(key)):
        newStr += newDict[key]

list(newStr).sort(key=lambda x: x.lower())
print(newStr)
