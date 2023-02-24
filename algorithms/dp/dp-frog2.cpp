// https://atcoder.jp/contests/dp/tasks/dp_b

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N];
int h[N];
const int INF = 2e5;
int k;
int solve(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    // calculate cost
    int cost = INF;
    if (dp[n] != -1)
        return dp[n];
    for (int i = 1; i <= k; i++)
    {
        if (n - i <= 0)
            break;
        int calculate = solve(n - i) + abs(h[n] - h[n - i]);
        cost = min(cost, calculate);
    }
    return dp[n] = cost;
}
int main(void)
{
    int n;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        h[i] = val;
    }
    cout << solve(n) << endl;
}