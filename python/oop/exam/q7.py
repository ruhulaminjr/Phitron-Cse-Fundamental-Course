
numbers = [10, 20, 10, 40, 50, 60, 70]
target = 50

for i, num in enumerate(numbers):
    for j, num2 in enumerate(numbers):
        if num + num2 == target:
            print(i, j)
            break
