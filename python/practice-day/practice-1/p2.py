""" Write a program to print the following number pattern using a loop.
Input: 5
Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
 """
n = int(input("Input: "))

for i in range(1, n+1):
    for j in range(0, i):
        print(j+1, end=" ")
    print("")
