#include <bits/stdc++.h>
using namespace std;

const int N = 50;
int n;
int matrix[N][N];
bool visited[N][N];
pair<int, int> parent[N][N];
pair<int, int> src;
pair<int, int> dst;

bool checkBoundary(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

void bfs() {
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = true;

    while (!q.empty()) {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;
        int dx[] = {0, 0, -1, 1};
        int dy[] = {-1, 1, 0, 0};

        for (int i = 0; i < 4; i++) {
            int newx = x + dx[i];
            int newy = y + dy[i];

            if (checkBoundary(newx, newy, n) && matrix[newx][newy] != -1 && visited[newx][newy] == false) {
                visited[newx][newy] = true;
                parent[newx][newy] = {x, y};
                q.push({newx, newy});
            }
        }
    }
}

int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < n; j++) {
            if (input[j] == '.') {
                matrix[i][j] = 0;
            } else if (input[j] == 'X') {
                dst = {i, j};
                matrix[i][j] = 2;
            } else if (input[j] == 'O') {
                matrix[i][j] = -1;
            } else if (input[j] == '@') {
                src = {i, j};
                matrix[i][j] = 1;
            }
        }
    }

    bfs();

    if (visited[dst.first][dst.second] == false) {
        cout << "N" << endl;
        return 0;
    }

    cout << "Y" << endl;

    pair<int, int> selected = dst;
    while (selected.first != -2 && selected.second != -2) {
        matrix[selected.first][selected.second] = 3;
        selected = parent[selected.first][selected.second];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 2) {
                cout << "X";
            } else if (matrix[i][j] == 3) {
                cout << "+";
            } else if (matrix[i][j] == -1) {
                cout << "O";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
