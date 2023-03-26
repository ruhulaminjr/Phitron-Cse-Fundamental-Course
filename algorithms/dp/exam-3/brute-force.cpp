#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 1e5;
int main(void)
{
    cin >> n;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max({1 + dp[i - 1],
                     2 + (i >= 3 ? dp[i - 3] : 0),
                     3 + (i >= 5 ? dp[i - 5] : 0)});
    }
    cout << dp[n] << endl;
}