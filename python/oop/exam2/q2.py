""" 2. Write a program center_align.py to centre align all lines in the given file.
Example output:
I am sure that the shells are seashore shells.
So if she sells seashells on the seashore,
The shells that she sells are seashells,
I am sure She sells seashells on the seashore
 """


with open("q2.txt", 'r') as file:
    for txt in file.readlines():
        print(txt.center(150))
