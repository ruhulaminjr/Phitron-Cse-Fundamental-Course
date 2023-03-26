#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
vector<vector<int>> board(8, vector<int>(8, INF));
int knight_moves(pair<int, int> src, pair<int, int> dest)
{
    board[src.first][src.second] = 0;
    vector<pair<int, int>> moves = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};
    queue<pair<int, int>> q;
    q.push(src);
    while (!q.empty())
    {
        pair<int, int> curr = q.front();
        q.pop();
        for (auto move : moves)
        {
            int x = curr.first + move.first;
            int y = curr.second + move.second;
            if (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] > board[curr.first][curr.second] + 1)
            {
                board[x][y] = board[curr.first][curr.second] + 1;
                q.push({x, y});
            }
        }
    }
    return board[dest.first][dest.second];
}

int main()
{
    pair<int, int> src;
    pair<int, int> dest;
    cin >> src.first >> src.second;
    cin >> dest.first >> dest.second;
    cout << knight_moves(src, dest) << endl;
    return 0;
}
