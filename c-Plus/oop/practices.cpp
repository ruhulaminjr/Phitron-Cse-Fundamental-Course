#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int english_marks;

private:
    string password;

public:
    string name;
    char section;
    int roll;
    void set_marks(int marks)
    {
        english_marks = marks;
    }
    void set_password(string pass)
    {
        password = pass;
    }
    int get_marks()
    {
        return english_marks;
    }
    void update_marks(string pass, int marks)
    {
        if (password == pass)
        {
            english_marks = marks;
            cout << "Marks Updated" << endl;
        }
        else
        {
            cout << "InCorrect Password" << endl;
        }
    }
};
int main(void)
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name : " << endl;
        cin >> st[i].name;
        cout << "Enter Section 'A' or 'B'" << endl;
        cin >> st[i].section;
        cout << "Enter Roll : " << endl;
        cin >> st[i].roll;
        int marks;
        cout << "Enter Marks : " << endl;
        cin >> marks;
        st[i].set_marks(marks);
        string pass;
        cout << "Enter password" << endl;
        cin >> pass;
        st[i].set_password(pass);
    }

    cout << "Update Student" << endl;
    int marks, roll;
    string password;
    cout << "Enter Updated Marks: " << endl;
    cin >> marks;
    cout << "Enter Roll : " << endl;
    cin >> roll;
    cout << "Enter Password: " << endl;
    cin >> password;
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        if (st[i].roll == roll)
        {
            st[i].update_marks(password, marks);
            check = 0;
            break;
        }
    }
    if (check)
    {
        cout << "Student Not Found" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << st[i].name << endl;
        cout << "Roll: " << st[i].roll << endl;
        cout << "section: " << st[i].section << endl;
        cout << "English Marks: " << st[i].get_marks() << endl;
    }
}
/*
Make an array of Student class of size N. Template is given below:
Class Student
{
    string name;
    char section;
    int roll;
    int english_marks;
    string password;
}

Make name, section and roll as public so that these can be accessed outside.

Make english_marks protected so that this can’t be accessed outside except the derived class.

Make the password private so that this can’t be accessed outside.

Make a set_marks() function inside Student that will set english_marks of Student class;

Make a set_password() function inside Student that will set password to Student class.

Make a get_maks() function inside Student that will return english_marks of the Student.

Take name, section, roll, marks, and password as input for all Student class from the user and set them to the array of Student.

Make a function named update_marks() in the Student class which will take a string password and int marks as parameters and will check if the password matches with that student, and set the marks to english_marks of that Student. If the password doesn’t match, show an error.

Take roll, marks and password input from the user and find the Student that matches with the roll. If the Student is not found, show an error.

If the Student is found, call update_marks() function to update the english_marks of that Student.

Print all information except the password of all Student.

*/