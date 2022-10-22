#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, d, r;
    while (cin >> n >> d >> r)
    {
        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }
        int mroutes[n] = {0};
        int eroutes[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> mroutes[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> eroutes[i];
        }
        sort(mroutes, mroutes + n);
        sort(eroutes, eroutes + n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            temp = (mroutes[i] + eroutes[n - 1 - i] - d);
            if (temp > 0)
            {
                sum += temp;
            }
        }
        cout << sum * r << endl;
    }
}