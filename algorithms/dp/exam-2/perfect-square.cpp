#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int dp[N];
int solve(int n)
{
    if (n <= 3)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = N;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, solve(n - i * i) + 1);
    }
    return dp[n] = ans;
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << solve(n) << endl;
}