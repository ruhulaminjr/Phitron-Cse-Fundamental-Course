""" 3. Write a python program to reverse every word from a given string s and output a new string. The position of words will remain the same, but their contents will be in reverse order.

s = “Programming Hero is the best”

Expected output: “gnimmargorP oreH si eht tseb”
 """


def reverseWord(s):
    new_s = map(lambda x: x[::-1], s.split(" "))
    return " ".join(new_s)


s = input("s: ")

s_rev = reverseWord(s)

print(s_rev)
