#include <bits/stdc++.h>
using namespace std;
const int N = 60;
const int M = 1001;
const int MOD = 100000007;
int dp[N][M];
int coins[N], Limit[N];

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
                dp[i][j] = 0;
            }
        }
        // base case
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int target = 0; target <= k; target++)
            {
                dp[i][target] = dp[i - 1][target];
                for (int j = 1; j <= Limit[i]; j++)
                {
                    if (target < j * coins[i])
                    {
                        break;
                    }
                    int ret = dp[i - 1][target - j * coins[i]];
                    dp[i][target] = (ret + dp[i][target]) % MOD;
                }
            }
        }
        cout << "Case " << ++tst << ": " << dp[n][k] << endl;
    }
}