#include <bits/stdc++.h>
using namespace std;

const int N = 101;
vector<int> adj_list[N];
vector<bool> visited;
vector<pair<int, int>> newg;
void dfs(int src, int p)
{
    visited[src] = true;

    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == false)
        {
            newg.push_back({src, adj_node});
            dfs(adj_node, src);
        }
        else
        {
            if (src == p)
            {
                newg.push_back({src, adj_node});
            }
        }
    }
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    visited.resize(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(1, -1);
    for (auto node : newg)
    {
        cout << node.first << " " << node.second << endl;
    }
}