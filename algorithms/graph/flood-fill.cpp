/*
Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3
step
while any unvisited coordinate:
    run bfs using grid traversal algorithm

*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int maze[N][N] = {};
int visited[N][N] = {};
int n, m;

// bfs in grid
/*
check boundary
(x,y) right -> x,y+1;
      left  -> x,y-1
      up    -> x-1,y;
      down ->  x+1,y;

*/
bool checkBoundary(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}
bool isValid(int x, int y)
{
    if (maze[x][y] != -1)
    {
        return true;
    }
    return false;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1;
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
            int newDx = x + dx[i];
            int newDy = y + dy[i];
            if (checkBoundary(newDx, newDy) && isValid(newDx, newDy) && visited[newDx][newDy] == 0)
            {
                q.push({newDx, newDy});
                visited[newDx][newDy] = 1;
            }
        }
    }
}
pair<int, int> unvisited_coord()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == 0 && maze[i][j] != -1)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main(void)
{
    cin >> n >> m;
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
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << maze[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    int room = 0;
    while (1)
    {
        pair<int, int> src = unvisited_coord();
        if (src == pair<int, int>(-1, -1))
            break;
        bfs(src);
        room++;
    }
    cout << room << endl;
}