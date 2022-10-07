data = "anTEiRour\ne"

new_data = data.lower()

output = ""

n = len(new_data)
i = 0
for char in new_data:
    if (char == 'a') or (char == 'e') or (char == 'i') or (char == 'o') or (char == 'u'):
        output += char
        if i < n-6:
            output += "_"
        i += 1
print(output)
