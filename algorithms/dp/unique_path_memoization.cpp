#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N][N];
int solve(int n, int m)
{
    if (n == 0 && m == 0)
        return 1;
    if (dp[n][m] != -1)
        return dp[n][m];
    int ans = 0;
    if (n > 0)
        ans += solve(n - 1, m);
    if (m > 0)
        ans += solve(n, m - 1);
    return dp[n][m] = ans;
}
int main(void)
{
    int ro, col;
    cin >> ro >> col;
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < col; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << solve(ro - 1, col - 1) << endl;
    return 0;
}