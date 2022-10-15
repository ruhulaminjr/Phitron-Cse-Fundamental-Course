""" 9. You need to make a positive story into a negative by changing some of its words automatically. Someone gave you a list `replace with’ and asked to find the words that are in that list in string ‘s’ and replace them with the next word of that list.

replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


Output example (one done for you): 
"I am the thief of Baghdad..........."


Write a function named replace_word() and write your code inside this function. """


replace_with = ["chief", "thief", "superintendent",
                "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


def replace_word(rword, s):
    slist = s.split(" ")
    rword = {rword[i]: rword[i+1] for i in range(0, len(rword), 2)}
    for key, value in rword.items():
        if key in slist:
            idx = slist.index(key)
            slist[idx] = value
    s = " ".join(slist)
    print(s)


replace_word(replace_with, s)

