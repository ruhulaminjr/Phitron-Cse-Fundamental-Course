#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int dp[N];
int nums[N];

int solve(int n)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[n] > nums[i])
        {
            ans = max(ans, solve(i) + 1);
        }
    }
    return dp[n] = ans;
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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, solve(i));
    }
    cout << ans << endl;
}
/*
8
10 9 2 5 3 7 101 18
*/