import requests


# 4. Create a chat bot that will understand if you are bored, then it will call the Bored API and suggest some activities to you in reply. It should also have the ability to tell the current time.

# """ Example:
# >> Hey robot, this house is boring. Any idea what I can do?
# Bot:  You can learn Javascript.
# >> thank you. Whats the time?
# Bot: its 9: 30 pm sir.
#  """

boredWords = ['boring', 'bad', 'notgood', 'lonely', 'alone', 'empty']
s = input("s : ")
strWords = s.split(" ")
feelBad = False
for word in s:
    if word in strWords:
        feelBad = True
        break

if feelBad:
    res = requests.get("http://www.boredapi.com/api/activity/").json()
    print(res)
else:
    print("Good Luck")
