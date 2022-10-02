def abs(num):
    if(num < 0):
        return -num
    else:
        return num


num1 = int(input("Enter Number 1 : "))
num2 = int(input("Enter Number 2 : "))
num3 = int(input("Enter Number 3 : "))

num1 = abs(num1)
num2 = abs(num2)
num3 = abs(num3)

print(num1, "\n", num2, "\n", num3)

""" Problem 2

Write a function that takes 3 integer inputs from user and
outputs absolute values of these integers without using any
library functions.

Sample Output:
100
234
350

Sample Input:
-100
234
-350 """
