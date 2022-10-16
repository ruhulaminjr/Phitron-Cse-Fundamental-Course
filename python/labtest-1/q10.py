""" 10. Given a string ‘s’ you need to find the words that are in list ‘a’ and use the next words on string ‘s’ to create a new string. Save it inside a file called ‘out.txt’. Remember to close the file after writing.

Write a function named create_new_string() and write your code inside this function.

a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

output = "I love Bangladesh" (inside a file)
 """
a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."


def create_new_string(lst, s):
    s = s.replace(",", "").replace(".", "").split(" ")
    lst = " ".join(lst).upper().split(" ")
    newWord = ""
    chk = True
    for idx, word in enumerate(s):
        if word.upper() in lst:
            if(chk and s[idx] == "to"):
                chk = False
            else:
                newWord += s[idx+1] + " "
    with open("output.txt", "w") as f:
        f.write(newWord)
        f.close()


create_new_string(a, s)
