#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

/*
step 1 base case {
    n == 1 then return 0
}

step 2 calculate sub problem{
    ans = Min(stone(n-1) + abs(h[n]- h[n-1]), stone(n-2) + abs(h[n]-,h[n-2])

step 3 check already solved subproblem {
    if d[n] not equal -1 the return d[n] as ans
}
}
*/
int h[N];
int dp[N];
int stone(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans1 = stone(n - 1) + abs(h[n] - h[n - 1]);
    if (n == 2)
    {
        dp[n] = ans1;
        return dp[n];
    }
    int ans2 = stone(n - 2) + abs(h[n] - h[n - 2]);

    int ans = min(ans1, ans2);
    dp[n] = ans;
    return ans;
}


int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << stone(n) << endl;
}