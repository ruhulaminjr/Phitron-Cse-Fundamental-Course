#include <bits/stdc++.h>
using namespace std;
void bfs(int node, int N, vector<vector<int>> &adj_matrix)
{
    int visited[N + 1] = {};
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        
        for (int i = 0; i <= N; i++)
        {
            int chk = adj_matrix[front][i];
            if (chk == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    cout<<endl;
}

int main(void)
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_matrix(n+1,vector<int>(n+1,0));
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    bfs(0, n, adj_matrix);
}
/*
intput : 
6 7
0 1
0 6
1 3
1 5
1 2
5 4
4 2

*/