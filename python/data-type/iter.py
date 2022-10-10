try:
    numbers = [12, 4, 44, 22, 35, 65, 677, 54, 34]
    itrNum = iter(numbers)
    print(next(itrNum))
    print("Iam doing something Else")
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))
    print(next(itrNum))

    print(next(itrNum))
    print(next(itrNum))
except StopIteration:
    print("Iterating Object Value End")
