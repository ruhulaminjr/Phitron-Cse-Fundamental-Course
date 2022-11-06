""" 1. We can read 'abba' if we reverse the letters, its still 'abba', so this string is called palindrome. Write a python program to check if a string is palindrome or not.
 """


def checkPalindrome(s):
    newStr = ""
    for i in range(len(s)-1, -1, -1):
        newStr += s[i]
    return newStr == s


print(checkPalindrome("tenet"))
