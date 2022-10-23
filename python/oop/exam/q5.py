""" 5. Write a python program to read student_name and mark from keyboard and store the data in a text file with an unique student_id .
 """


import random

name = input("Name : ")
mark = input("Marks : ")
data = {
    "student_name": name,
    "mark": mark,
    "student_id": random.randint(1, 1000)
}

with open("text.txt", "a") as f:
    textData = f"Student_id:{data['student_id']}\nStudent_Name : {data['student_name']}\nMark: {data['mark']}\n"
    f.write(textData)
    f.close()
