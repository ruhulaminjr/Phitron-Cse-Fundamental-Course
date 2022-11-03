"""
Write a program to store a list of contact names and telephone numbers, similar to the contact lists you might find on a mobile phone. The data needs to be stored in a file so that it is persistent that is, the data available at the beginning of a new execution of the program is the same as at the end of the previous execution.
 """
import json


class Contact:
    def __init__(self, name, numbers):
        self.name = name
        self.number = numbers
        with open('contacts.txt', 'r') as file:
            if not file.readlines():
                file.write(f"{self.name} {self.number}\n")
                print(file.readlines())
        with open('contacts.txt', 'a+') as file:
            if not file.readlines():
                file.write(f"{self.name} {self.number}\n")
                print(file.readlines())
            print(file.readlines())
            for contact in file.readlines():
                temp = contact.split(" ")
                print(temp)
                if(temp[0] == self.name):
                    print("This person is already entered.")
                    chk = input("Add This Any any Enter u :")
                    if(chk == 'y' or chk == 'Y'):
                        file.write(f"{self.name}-copy {self.number}\n")
                elif(temp[1] == self.number):
                    print("This person Number is  already entered.")
                    chk = input("Add This Anyway Enter u :")
                    if(chk == 'y' or chk == 'Y'):
                        file.write(f"{self.name} {self.number}\n")
                else:
                    file.write(f"{self.name} {self.number}\n")

            file.close()


contact1 = Contact("Ruhul", "017xxxxxx")
