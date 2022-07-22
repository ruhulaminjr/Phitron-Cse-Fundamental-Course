
#include <bits/stdc++.h>
// Polymorphism - Function Overloading
using namespace std;
class Poly
{
public:
    void add(int a, int b)
    {
        cout << "Fist One Run" << endl;
        cout << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Second One Run" << endl;
        cout << a + b << endl;
    }
    void add(char s)
    {
        cout << "Third One Run" << endl;
        cout << "Hello " << s << endl;
    }
};
int main(void)
{
    Poly ext;
    ext.add(56, 88);
    ext.add(99.9, 5.8);
    ext.add('R');
}