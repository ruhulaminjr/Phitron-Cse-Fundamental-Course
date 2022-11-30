

file = open('words.dat', 'w')
word = ''
while True:
    word = input('Enter a word (enter END to quit): ')
    if(word == ""):
        break
    file.write(word + '\n')
file.close()


with open('words.dat', 'r') as f:
    words = f.readlines()
    for i, word in enumerate(words):
        print(f"{i+1}: {word}", end="")
    f.close()
