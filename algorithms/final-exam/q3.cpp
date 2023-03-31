#include <bits/stdc++.h>
using namespace std;
const int N = 100;
char grid[N][N];
int n, m;
bool vis[N][N];
// int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
// int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
void dfs(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;
    if (vis[i][j] || grid[i][j] == '.')
        return;
    vis[i][j] = true;
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i - 1, j - 1);
    dfs(i - 1, j + 1);
    dfs(i + 1, j - 1);
    dfs(i + 1, j + 1);
}
int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '#')
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}