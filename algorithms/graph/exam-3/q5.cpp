#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> maze;
vector<vector<bool>> visited;
int longest = 0;
int row, col, t = 0;
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
bool checkBoundary(int x, int y)
{
    if (x < 0 || x >= row || y < 0 || y >= col)
    {
        return false;
    }
    return true;
}
void dfs(int currX, int currY, int currL = 1)
{
    if (visited[currX][currY])
    {
        longest = max(longest, currL);
        return;
    }
    visited[currX][currY] = true;

    for (int i = 0; i < 8; i++)
    {
        int x = currX + dx[i];
        int y = currY + dy[i];
        if (checkBoundary(x, y))
        {
            if (maze[x][y] - maze[currX][currY] == 1)
            {
                dfs(x, y, currL + 1);
            }
        }
    }
}
void findPath()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (maze[i][j] == 'A')
            {
                dfs(i, j);
            }
        }
    }
}
int main(void)
{

    while (true)
    {
        cin >> row >> col;
        if (row == 0 && col == 0)
        {
            return 0;
        }
        maze.resize(row, vector<char>(col));
        visited.resize(row, vector<bool>(col, false));
        for (int i = 0; i < row; i++)
        {
            string input;
            cin >> input;
            for (int j = 0; j < col; j++)
            {
                maze[i][j] = input[j];
            }
        }
        findPath();
        t++;
        cout << "Case " << t << ": " << longest << endl;
        longest = 0;
        row = 0;
        col = 0;
    }
}