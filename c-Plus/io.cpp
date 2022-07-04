#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char b[20];
    cin.getline(b, 20);
    cin >> a;
    double x = double(a);
    cout << "Name : " << b << " Marks : " << x << endl;
    cout << "Enter All Subject Marks" << endl;
    int marks[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    return 0;
}