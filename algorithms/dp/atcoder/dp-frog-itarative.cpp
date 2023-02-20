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

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    dp[1] = 0; // base case

    for (int i = 2; i <= n; i++)
    {
        int ans1 = dp[i-1] + abs(h[i] - h[i - 1]);
        if (i == 2)
        {
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i-2] + abs(h[i] - h[i - 2]);
        dp[i] = min(ans1, ans2);
    }

    cout << dp[n] << endl;
}