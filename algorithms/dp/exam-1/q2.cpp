#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;
int t, n, k, w[1005], dp[N][N];

int solve(int i, int curr_w, int total)
{
    if (i >= n)
    {
        return curr_w;
    }
    if (dp[i][curr_w] != -1)
    {
        return dp[i][curr_w];
    }
    if (w[i] + curr_w <= total)
    {
        int a = solve(i + 2, w[i] + curr_w, total);
        int b = solve(i + 1, curr_w, total);
        dp[i][curr_w] = max(a, b);
    }
    else
    {
        dp[i][curr_w] = solve(i + 1, curr_w, total);
    }
    return dp[i][curr_w];
}

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        memset(dp, -1, sizeof(dp));
        for (int j = 0; j < n; j++)
            cin >> w[j];
        int ans = solve(0, 0, k);
        cout << "Scenario #" << i << ": " << ans << "\n";
    }
    return 0;
}
/*
                  (0,0,100)
                /          \
         (2,50,100)         (1,0,100)
        /         \ 
   (4,80,100)      (3,50,100) 
            \ 
          (5,90,100)
*/