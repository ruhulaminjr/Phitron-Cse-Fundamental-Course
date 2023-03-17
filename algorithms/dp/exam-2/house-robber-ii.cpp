#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int dp[N];
int nums[N];
int solve(int n)
{
    if (n == 0 || n == 1)
    {
        nums[n];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans1 = solve(n - 1);
    int ans2 = solve(n - 2);
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    memset(dp, -1, sizeof(dp));
}