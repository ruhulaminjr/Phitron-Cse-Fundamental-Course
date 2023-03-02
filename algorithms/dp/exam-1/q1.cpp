#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 9;

long long coins[N], dp[N];

int main(void)
{
    int test;
    cin >> test;
    for (int t = 1; t <= test; t++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }
        dp[0] = coins[0];
        dp[1] = max(dp[0], coins[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 2] + coins[i], dp[i - 1]);
        }
        cout << "Case " << t << ": " << dp[n - 1] << endl;
    }
}

