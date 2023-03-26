#include <bits/stdc++.h>
using namespace std;
const int N = 3003;

/*
Dp - state Lcs(i,j) return the longest common subseqquence
reccureance relation : 1+ lcs(i+1,j+1) if s[i] == t[i] else
                        max(lcs(i+1,j),ls(i,j+1))
*/
int n, m;
int dp[N][N];
string s, t;
int main(void)
{
    cin >> s >> t;
    n = s.size();
    m = t.size();
    for (int i = 0; i <= n; i++)
    {
        dp[i][m] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        dp[n][j] = 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (s[i] == t[j])
            {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    cout << dp[0][0] << endl;
}