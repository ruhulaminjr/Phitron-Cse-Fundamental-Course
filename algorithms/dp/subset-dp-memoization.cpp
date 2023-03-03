#include <bits/stdc++.h>
using namespace std;
const int N = 101;
const int M = 1e5;
int dp[N][M];
int nums[N];
int subset(int n, int target)
{
    // base case
    if (n == 0)
    {
        if (target == 0)
        {
            return 1;
        }
        return 0;
    }
    // check if already calculated sub problem
    if (dp[n][target] != -1)
    {
        return dp[n][target];
    }
    // calculate sub problem and declare reccurance relation
    int ans1 = subset(n - 1, target);
    if (target < nums[n])
    {
        dp[n][target] = ans1;
        return ans1;
    }
    int ans2 = subset(n - 1, target - nums[n]);
    int ans = ans1 or ans2;
    dp[n][target] = ans;
    return ans;
}
int main(void)
{
    int n, target;
    cin >> n >> target;
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << subset(n, target) << endl;
}
/*
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
6 9
3 34 4 12 5 2
Output: True
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
6 30
3 34 4 12 5 2
Output: False
There is no subset that add up to 30.
*/