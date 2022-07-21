#include <bits/stdc++.h>

using namespace std;
class Parent
{
public:
    int id;

private:
    int pass;

protected:
    int roll;

public:
    Parent(int a, int b, int c)
    {
        id = a;
        pass = b;
        roll = c;
    }
    void see()
    {
        cout << "Parent Data " << id << " Pass: " << pass << " Roll : " << roll << endl;
    }
};
class Child : public Parent
{
private:
    int xx;

public:
    Child(int x, int a, int b, int c) : Parent(a, b, c)
    {
        xx = x;
    }
    void see()
    {
        cout << "Child Data "
             << " XX:" << xx << " id : " << id << " Pass: "
             << " Roll : " << roll << endl;
    }
};
int main(void)
{
    Parent pt(55, 1234, 88);
    Child ch(99, 66, 2345, 77);
    ch.see();
    pt.see();
}