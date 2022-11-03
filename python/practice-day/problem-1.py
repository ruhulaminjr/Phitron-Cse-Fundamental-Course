""" Given: A string of length at most 200 letters and four integers a, b, c and d.
Return: The slice of this string from indices a through b and c through d(with space in between), inclusively.
Sample Dataset
HumptyDumptysatonawallHumptyDumptyhadagreatfallAlltheKingshorsesandallt heKingsmenCouldntputHumptyDumptyinhisplaceagain.
22 27 97 102
Sample Output
Humpty Dumpty
 """

instr = "HumptyDumptysatonawallHumptyDumptyhadagreatfallAlltheKingshorsesandallt heKingsmenCouldntputHumptyDumptyinhisplaceagain"


print(instr[22:28], instr[98:104])

""" Given: A string of length at most 10000 letters.
Return: How many times any word occurred in string. Each letter case (upper or lower) in word matters. Lines in output can be in any order.
Sample Dataset
We tried list and we tried dicts also we tried Zen

Output
and 1
We 1
tried 3 """


data = "We tried list and we tried dicts also we tried Zen"

data = data.split(" ")
chk = {}

for item in data:
    if item in chk.keys():
        chk[item] = chk[item] + 1
    else:
        chk[item] = 1

# print(chk)
""" An RNA string is a string formed from the alphabet containing 'A', 'C', 'G', and 'U'. Given a DNA string corresponding to a coding strand, its transcribed RNA string is formed by replacing all occurrences of 'T' in t with 'U' in u.
Given: A DNA string having length at most 1000 nt.
Return: The transcribed RNA string of t.
Sample Dataset
GATGGAACTTGACTACGTAAATT

Output
GAUGGAACUUGACUACGUAAAUU
 """

data = "GATGGAACTTGACTACGTAAATT"

print(data.replace('T', "U"))
