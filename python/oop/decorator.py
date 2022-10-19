import math
import time


def timer(func):
    print("Timer Run ")

    def inner(*args, **kwargs):
        print("Inner Start ")
        start = time.time()
        func(*args, **kwargs)
        end = time.time()
        print(f"Inner End Time Taken {end - start}")
    return inner


@timer
def factorial(n):
    print(f"Factorial of {n} is {math.factorial(n)}")


# timer(factorial)(5)

factorial(n=5)
