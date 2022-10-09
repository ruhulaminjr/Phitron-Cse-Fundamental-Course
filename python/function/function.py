def add(num1, num2=55):  # num5):
    # we cannot add normal parameter after add optional parameter
    sum = num1 + num2
    return sum


result = add(15)

# print(result)


def multiply(*numbers):
    # print(numbers)
    # (44, 23, 23, 1, 2)
    result = 1
    for i in numbers:
        result *= i
    return result


res = multiply(44, 23, 23, 1, 2)

print(res)


def full_name(fname, lname):
    name = f'{fname} {lname}'
    return name


fullName = full_name(lname="Amin", fname="Ruhul")

print(fullName)


def all_types(name, *hobby, **parents):
    print(f'Name : {name}')
    print(hobby)
    for item in hobby:
        print(item)
    print(parents)
    for key, value in parents.items():
        print(f'{key} = {value}')


all_types("Super Hero", "Fight", "Help People",
          "Save Earth From Evil", father="Bat-Man", mother="Cat-Women")
