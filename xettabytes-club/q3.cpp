#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, f;
        cin >> a;
        cin >> f;
        while (f--)
        {
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            for (int i = a - 1; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            if (f > 0)
            {
                cout << endl;
            }
        }
        if (t > 0)
        {
            cout << endl;
        }
    }
}