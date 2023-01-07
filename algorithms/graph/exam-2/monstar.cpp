#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int visited[N][N] = {};
int maze[N][N] = {};
int level[N][N];
int n, m;
bool check(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        if (maze[x][y] != -1)
        {
            return true;
        }
    }
    return false;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        int dx[] = {0, 0, -1, 1};
        int dy[] = {1, -1, 0, 0};
        for (int i = 0; i < 4; i++)
        {
            int newx = x + dx[i];
            int newy = y + dy[i];
            if (check(newx, newy) && !visited[newx][newy])
            {
                level[newx][newy] = level[x][y] + 1;
                visited[newx][newy] = 1;
                q.push({newx, newy});
            }
        }
    }
}

int main(void)
{

    cin >> n >> m;
    pair<int, int> src;
    vector<pair<int, int>> boundary;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            if (input[j] == '#' || input[j] == 'M')
            {
                maze[i][j] = -1;
            }
            else if (input[j] == 'A')
            {
                src = {i, j};
            }
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                boundary.push_back({i, j});
            }
        }
    }
    bfs(src);
    bool chk = false;
    int dstlevel = -1;
    for (auto cell : boundary)
    {
        int i = cell.first;
        int j = cell.second;
        if (visited[i][j])
        {
            dstlevel = level[i][j];
            chk = true;
            break;
        }
    }
    if (chk)
    {
        cout << "YES" << endl;
        cout << dstlevel << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
