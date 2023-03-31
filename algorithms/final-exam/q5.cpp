#include <bits/stdc++.h>
using namespace std;

int n, m;
int grid[100][100];

int solve(int i, int j)
{
    // base case
    if (i == 0 && j == m)
    {
        return grid[i][j];
    }

    int ans1 = INT_MIN, ans2 = INT_MIN;
    if (i > 0)
    {
        ans1 = grid[i][j] + solve(i - 1, j);
    }
    if (j <= m)
    {
        ans2 = grid[i][j] + solve(i, j + 1);
    }
    return max(ans1, ans2);
}

int main(void)
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << solve(n, 1) << endl;
    return 0;
}

/*
2 3
3 2 4
1 5 1

output : 12

*/

