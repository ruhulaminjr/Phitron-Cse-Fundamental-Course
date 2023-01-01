#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int maze[N][N] = {};
int visited[N][N] = {};
int level[N][N] = {};
int n, m;
/*
(x,y) right -> x,y+1;
      left  -> x,y-1;
      up    -> x-1,y;
      down  -> x+1,y;

check 1;
step 1: is coordinate withing maze
step 2: check visibility
step 3 : check the wall

*/
bool check(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        if (maze[x][y] != -1 && visited[x][y] == 0)
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
            if (check(newx, newy))
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
    pair<int, int> src, dst;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            if (input[j] == '#')
            {
                maze[i][j] = -1;
            }
            else if (input[j] == 'A')
            {
                src = {i, j};
            }
            else if (input[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }
    bfs(src);
    if (visited[dst.first][dst.second] == 1)
    {
        cout << "YES" << endl;
        cout << level[dst.first][dst.second] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

/*


Example

Input:
5 8
########
#.A#...#
#.##.#B#
#......#
########

Output:
YES
9
LDDRRRRRU
*/