""" Display Fibonacci series up to 10 terms

0  1  1  2  3  5  8  13  21  34
 """
first = 0
second = 1
n = 10
print(first, second, end=" ")
n -= 2
while n > 0:
    print(first+second, end=" ")
    n -= 1
    temp = second
    second = first + second
    first = temp
print()
