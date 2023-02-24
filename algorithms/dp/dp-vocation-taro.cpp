#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N][4], happiness[N][4];
int fun(int day, int curr_h)
{
    // Base Case
    if (day == 1)
    {
        return happiness[day][curr_h];
    }
    // check if already calculade happyness
    if (dp[day][curr_h] != -1)
    {
        return dp[day][curr_h];
    }
    // calculate Sub Problem
    int max_happy = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (i != curr_h)
        {
            int candidate = fun(day - 1, i) + happiness[day][curr_h];
            max_happy = max(max_happy, candidate);
        }
    }

    return dp[day][curr_h] = max_happy;
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> happiness[i][j];
            dp[i][j] = -1;
        }
    }
    int ans1 = fun(n, 1);
    int ans2 = fun(n, 2);
    int ans3 = fun(n, 3);
    cout << max({ans1, ans2, ans3});
}