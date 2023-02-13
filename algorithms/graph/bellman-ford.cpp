#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int N = 1e5;
long long d[N];
int parent[N];
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
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    // BELLMAN-FORM ALLGORITHMS
    bool negativeCycle = false;
    int last_update_node = -1;
    for (int i = 1; i <= n; i++)
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
                    parent[v] = u;
                    if (i == n)
                    {
                        negativeCycle = true;
                        last_update_node = v;
                    }
                }
            }
        }
    }
    if (negativeCycle == false)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    int selectedNode = last_update_node;
    for (int i = 1; i <= n - 1; i++)
    {
        selectedNode = parent[selectedNode];
    }
    int currNode = selectedNode;
    vector<int> cycle;
    cycle.push_back(selectedNode);
    while (true)
    {
        selectedNode = parent[selectedNode];
        cycle.push_back(selectedNode);
        if (selectedNode == currNode)
        {
            break;
        }
    }
    reverse(cycle.begin(), cycle.end());
    for (int node : cycle)
    {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
