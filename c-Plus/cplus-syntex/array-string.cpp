#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char str[20];
    int marks[5];
    cout << "Enter Your Name :";
    cin.getline(str, 20);
    cout << "Enter YOur Marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    cout << "Name: " << str << endl;
    cout << "Marks" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " " << endl;
    }
}