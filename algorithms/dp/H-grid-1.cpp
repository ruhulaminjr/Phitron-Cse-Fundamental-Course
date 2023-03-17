#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int grid[N][N];
long long cnt = 0;
int dp[N][N];
void solve(int n, int m)
{
    if (n == 0 && m == 0)
    {
        cnt++;
        return;
    }
    if (dp[n][m] != -1)
    {
        cnt++;
        return;
    }
    if (grid[n][m] != 1)
    {
        if (n > 0)
        {
            solve(n - 1, m);
        }
        if (m > 0)
        {
            solve(m - 1, n);
        }
    }
    dp[n][m] = 1;
}
int main(void)
{
    int h, w;
    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        string st;
        cin >> st;
        for (int j = 0; j < w; j++)
        {
            if (st[j] == '.')
            {
                grid[i][j] = 0;
            }
            else if (st[j] == '#')
            {
                grid[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            dp[i][j] = -1;
        }
    }
    solve(h - 1, w - 1);
    cout << cnt << endl;
}