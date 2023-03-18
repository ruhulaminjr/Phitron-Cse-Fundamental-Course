#include <bits/stdc++.h>
using namespace std;
const int N = 60;
const int M = 1001;
const int MOD = 100000007;
int dp[N][M];
int coins[N], Limit[N];
int fun(int n, int k)
{
    // step 1 : base case
    if (n == 0)
    {
        if (k == 0)
            return 1;
        return 0;
    }
    // if already calculate subproblem then return it
    if (dp[n][k] != -1)
    {
        return dp[n][k];
    }
    // calculate smaller subproblem
    int ans = fun(n - 1, k);
    for (int i = 1; i <= Limit[n]; i++)
    {
        if (k - coins[n] < 0)
        {
            break;
        }
        int ret = fun(n - 1, k - i * coins[n]);
        ans = (ans + ret) % MOD;
    }
    return dp[n][k] = ans;
}
int main(void)
{
    int t, tst = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> coins[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> Limit[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << "Case " << ++tst << ": " << fun(n, k) << endl;
    }
}