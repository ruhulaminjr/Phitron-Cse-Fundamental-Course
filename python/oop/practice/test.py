""" 1. Write a Python Class named ‘Employee’ and show its type.Also show the __dict__ attributes and the values of __module__ attribute of that class.

    2. Write a python class named ‘Employee’ with three attributes named `employee_name`, ‘salary’ and ‘email_address`.Modify those attribute values and show the original and modified values of those attributes.

                                                                                          3. Write a python program to create an instance of ‘Employee’ class and display the namespace of that instance.

                                                                                          4. Modify the lab module
                                                                                          code(My Camera App),
    blink the red circle while video recording.
 """


class Employee:
    def __init__(self, name, salery, email):
        self.name = name
        self.salery = salery
        self.email = email


em = Employee("Ruhul", 3423, "rr@gmail.com")

if __name__ == '__main__':
    print(em.__dir__)
