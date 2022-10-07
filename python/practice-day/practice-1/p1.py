""" You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.(don’t use any python built in function)
Example:  pHitrOn.iO presents "Python COuRSe".
Ans: PhITRoN.Io PRENSENTS “pYTHON coUrsE”
 """

str1 = input("Enter String 1 : ")
output = ""
for ch in str1:
    a = ord(ch)
    if a < 97 and a >= 65:
        a += 32
    elif a >= 97 and a <= 122:
        a -= 32
    output += chr(a)
print(output)
