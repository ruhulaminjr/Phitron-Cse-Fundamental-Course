""" 1. Find the number of dangerous words(die, fire, kill, killer, missile, bomb, burst, shoot, president, burn) in the string ‘s’ and print them. No words should be printed twice.

s = “I am feeling very dizzy tonight. But I am sure I did not fire that missile when I was drunk. Being a very professional contract killer I do not fire or plant bombs until particularly needed. Also, I do not have the courage to shoot the President let alone burst a bomb or fire a missle. Stop blaming me or my wrath will burn you into ashes. Ashes is not a brand here, my wrath is like fire, you might die kiddo. So stop pulling my legs and focus on your job. Shoot through the exit now!”
 """
words = ["die", "fire", "kill", "killer", "missile",
         "bomb", "burst", "shoot", "president", "burn"]
s = input("s: ")

strlist = s.split(" ")

printed = []
for word in strlist:
    if word in words and word not in printed:
        print(word)
        printed.append(word)
