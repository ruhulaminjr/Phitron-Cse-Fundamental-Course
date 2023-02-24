#include <bits/stdc++.h>
using namespace std;

/*

*/
const int N = 1e5 + 10;
int dp[N];
int solve(int n, int k)
{
    // base Case
    if (k < n)
    {
        return 1;
    }
    // calculate Smaller sub - problem
    for (int i = n; i > 0; i--)
    {
        solve()
    }
}
int main(void)
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= k; i++)
    {
        dp[i] = -1;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i] = 1;
    }
    cout << solve(k) << endl;
}