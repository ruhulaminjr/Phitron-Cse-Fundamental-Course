""" 2. Write a python to read three floating numbers from the keyboard in a single line with ‘-’ (dash) in between and output their sum.

Example input:
>> enter numbers: 2.3-4.5-1.7

Example Output:
>> sum is : 8.5
 """


numbers = map(lambda x: float(x), input("enter numbers: ").split('-'))

sum = 0.0
for num in list(numbers):
    sum += num

print(f"sum is : {sum}")
