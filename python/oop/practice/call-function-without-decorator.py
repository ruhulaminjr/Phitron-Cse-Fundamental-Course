# def gfg_decorator(func):
#     print("Running gfg decorator")
#     func()


# @gfg_decorator
# def hello_decorator():
#     print("Gfg")

import math
import time


def functionUsed(func):

    # inner1 is a Wrapper function in
    # which the argument is called

    # inner function can access the outer local
    # functions like in this case "func"
    def inner():
        print("Inner function Running")
        func()
        print("Inner Function After running")
    return inner


def functioncall():
    print("This is Inside Function : call ")


functioncall = functionUsed(functioncall)

# functioncall()


def calculateTime(func):
    def inner(*args, **kwargs):
        start = time.time()
        func(*args, **kwargs)
        end = time.time()
        print("Time Take Inner function", func.__name__, end-start)
    return inner


@calculateTime
def factorial(num):
    time.sleep(5)
    print(math.factorial(num))


factorial(10)
