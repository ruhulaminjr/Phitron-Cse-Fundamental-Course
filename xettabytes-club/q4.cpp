#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u;
        cin >> n >> u;
        int arr[n] = {0};
        int diff[n + 1] = {0};
        for (int i = 0; i < u; i++)
        {
            int l, r, v;
            cin >> l >> r >> v;
            diff[l] += v;
            diff[r + 1] -= v;
        }
        for (int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                diff[i] = diff[i];
                arr[i] = diff[i];
            }
            else
            {
                diff[i] = diff[i] + diff[i - 1];
                arr[i] = diff[i];
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int idx;
            cin >> idx;
            cout << arr[idx] << endl;
        }
    }
}