

def clean_string(text):
    newstr = ""
    for ch in text:
        if ch >= 'a' and ch <= 'z' or ch >= 'A' and ch <= 'Z':
            newstr += ch
    return newstr


s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)
