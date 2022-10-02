""" Problem 4

Write a Python program to check if user entered number is ZERO, POSITIVE or
NEGATIVE until user does not want to quit.
User will type ‘Quit’ to close the program.
Sample:
> Enter input: 2
> 2 is positive
> -3
> -3 is negative
> “Quit”
> (stop the program) """

while(True):
    num = input("Enter input : ")
    if(num == "Quit"):
        print("(stop the program)")
        break
    else:
        num = int(num)
    if num % 2 == 0:
        print(f'{num} is positive')
    else:
        print(f'{num} is negative')