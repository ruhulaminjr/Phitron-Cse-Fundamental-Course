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
int Lcs(int i, int j)
{
    if (i == n || j == m)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s[i] == t[j])
    {
        int ans = 1 + Lcs(i + 1, j + 1);
        dp[i][j] = ans;
        return ans;
    }
    int ans = max(Lcs(i + 1, j), Lcs(i, j + 1));
    return dp[i][j] = ans;
}
int main(void)
{
    cin >> s >> t;
    n = s.size();
    m = t.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << Lcs(0, 0) << endl;
}