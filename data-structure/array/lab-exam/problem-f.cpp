#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    if (a != b && a != c && c != a && b != a && b != c)
    {
        count = 3;
    }
    else if (a == b && c != a || c == a && a != b || b == c && c != a)
    {
        count = 2;
    }
    else
    {
        count = 1;
    }
    cout << count << endl;
}