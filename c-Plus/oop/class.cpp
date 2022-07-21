#include <bits/stdc++.h>

using namespace std;
class Student
{
public: // access modifier
    char name[20];
    int id;
};
int main(void)
{
    Student ruhul;
    strcpy(ruhul.name, "Ruhul Amin");
    ruhul.id = 5699;
    cout << ruhul.name << " " << ruhul.id << endl;
    return 0;
}