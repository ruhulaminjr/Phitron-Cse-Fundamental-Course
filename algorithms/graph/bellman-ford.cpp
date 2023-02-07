#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9;
const int N = 1e5;
int d[N];
vector<pair<int, int>> adj_list[N];
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    // BELLMAN-FORM ALLGORITHMS
    for (int i = 1; i <= n - 1; i++)
    {
        for (int node = 1; node <= n; node++)
        {
            for (auto adj_node : adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;
                if (d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Node: " << i << "Cost: " << d[i] << " ";
    }
    cout << endl;
}
