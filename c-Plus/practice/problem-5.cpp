#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int bill = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i <= k)
        {

            bill += x;
        }
        else
        {
            bill += y;
        }
    }
    cout << bill << endl;
}
/*
There is a hotel with the following accommodation fee:

XX yen (the currency of Japan) per night, for the first KK nights
YY yen per night, for the (K+1)(K+1)-th and subsequent nights
Tak is staying at this hotel for NN consecutive nights. Find his total accommodation fee.
*/