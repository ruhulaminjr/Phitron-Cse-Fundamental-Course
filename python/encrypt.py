data = "ruhulaminjr"
shift = int(input("Enter Shift Key : "))
encrypt = ""
for char in data:
    encrypt += chr((ord(char)+shift - 97) % 26 + 97)
print(encrypt)

decrypt = ""

for char in encrypt:
    decrypt += chr((ord(char)-shift - 97) % 26 + 97)
print(decrypt)
