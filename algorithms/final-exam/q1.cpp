#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj_list[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    // converd adjlist ot adj matrix
    int matrix[n + 1][n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        for (auto node : adj_list[i])
        {
            int j = node.first;
            int w = node.second;
            matrix[i][j] = w;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (int j = 1; j <= n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}