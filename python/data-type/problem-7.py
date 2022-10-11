""" We know how to check if the key exists in a dictionary. Sometimes it is required to check if the given value is present.
Write a Python program to check if value 100 exists in the following dictionary. If it is present print “present” otherwise print “not present”

Sample Dictionary:
sample_dict = {'a': 100, 'b': 200, 'c': 300}

Expected Output:
present
 """

sample_dict = {'a': 100, 'b': 200, 'c': 300}

val = int(input("Value : "))
if(val in sample_dict.values()):
    print("present")
else:
    print("Not Present")
