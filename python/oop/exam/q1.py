def exp(a, b):
    return a**b


a, n = map(lambda x: int(x), input("enter numbers: ").split(" "))

print(exp(a, n))
