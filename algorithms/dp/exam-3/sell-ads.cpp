#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<pair<float, int>> ads;
int dp[N][N];
int fun(int n, int f, int p)
{
    // base Case
    if (n == 0 || f >= 1)
    {
        return return ads[n].second;
    }
    // check if already Calculateded
    if (dp[n][p] != -1)
    {
        return dp[n][s];
    }
    // calculate smaller subproblem
    dp[n][p] = max(fun(n - 1, dp[n][p] +))
}
int main(void)
{
    int n;
    cin >> n;
    ads.resize(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> ads[i].first >> ads[i].second;
    }
}