#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int Aarea = a * b;
    int Barea = c * d;
    if (Aarea > Barea)
    {
        cout << Aarea << endl;
    }
    else if (Barea > Aarea)
    {
        cout << Barea << endl;
    }
    else
    {
        cout << Aarea << endl;
    }
}