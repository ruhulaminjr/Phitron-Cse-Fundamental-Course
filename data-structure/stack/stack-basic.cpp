#include <bits/stdc++.h>
#include "mystack.h"

using namespace std;
/*
Stack of interger, string , float ,double class, pair,string,structure , object of class,
*/
int globalId = 111;
class Person
{
    string name;
    int id;
    float salery;

public:
    Person()
    {
        this->name = " ";
        this->id = -1;
        this->salery = -1.0;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalery(float salery)
    {
        this->salery = salery;
    }
    void setId()
    {
        this->id = globalId;
        globalId++;
    }
    Person(string name, float salery)
    {
        setName(name);
        setSalery(salery);
        setId();
    }
    void Print()
    {
        cout << "Name : " << this->name << " | Id : " << this->id << " | Salery : " << this->salery << endl;
    }
};
int main(void)
{
    // Stacks<pair<int, string>> st;
    // st.push(make_pair(11, "Ruhul"));
    // st.push(make_pair(22, "Amin"));
    // st.push(make_pair(33, "Jr."));
    // cout << "Count : " << st.size() << endl;
    // while (!st.isEmpty())
    // {
    //     pair<int, string> chk;
    //     chk = st.pop();
    //     cout << "Top Value " << chk.first << " | " << chk.second << endl;
    //     cout << chk.first << " | " << chk.second << endl;
    // }
    Stacks<Person> st;
    Person a("Ruhul", 999.8);
    Person b("Amin", 799.9);
    Person c("Ruhul Amin ", 1299.1);

    st.push(a);
    st.push(b);
    st.push(c);
    while (!st.isEmpty())
    {
        Person personObj = st.pop();
        personObj.Print();
    }
}