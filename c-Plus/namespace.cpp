#include <bits/stdc++.h>
using namespace std;
namespace fun
{
    int x = 99;
    void say()
    {
        cout << "X Value is " << x << endl;
    }
}
namespace fun2
{
    int y = 49;
    void say2()
    {
        cout << "y Value is " << y << endl;
    }
}
using namespace fun;
using namespace fun2;
int main(void)
{
    fun2::say2();
    say();
    int a, b;
    cin << a << b;
    cout >> b >> " " >> a
}