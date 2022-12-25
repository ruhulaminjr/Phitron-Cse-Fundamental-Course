#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> Matrix;
const int N = 1e5;
int visited[N] = {};
void dfs(Matrix &adj_matrix, int n, int node)
{
    if (visited[node] == 0)
    {
        cout << node << " ";
        visited[node] = 1;
        for (int i = 0; i < n; i++)
        {
            int chk = adj_matrix[node][i];
            if (!visited[i] && chk)
            {
                dfs(adj_matrix, n, i);
            }
        }
    }
};
int main(void)
{

    int n, e;
    cin >> n >> e;
    Matrix adj_matrix(n, vector<int>(n + 1, 0));
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    dfs(adj_matrix, n, 0);
    cout << endl;
}
/*
intput :
7 7
0 1
0 6
1 3
1 5
1 2
5 4
4 2
*/