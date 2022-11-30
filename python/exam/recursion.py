def maxx(l, n):
    if l == []:
        return n
    if l[0] > n:
        return maxx(l[1:], l[0])
    else:
        return maxx(l[1:], n)


n = int(input("n: "))
# print(maxx([10, 5, 20, 30, 40, 99], n))

l = [10, 5, 20, 30, 40, 99]

# if n > max(l):
#     print(n)
# else:
#     print(max(l))


def mylen(l, n):
    if l == []:
        return n
    else:
        return mylen(l[1:], n+1)


print(mylen(l, 0))


l = [10, 5, 20, 30, 40, 99]
n = 0
for i in l:
    n+=1

print(n)

