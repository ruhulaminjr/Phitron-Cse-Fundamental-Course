#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];
int level[N];
void dfs(int node)
{
    visited[node] = 1;
    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            level[adj_node] = level[node] + 1;
            dfs(adj_node);
        }
    }
}
int main(void)
{
    // intitial make all level - 1
    for (int i = 0; i < N; i++)
    {
        level[i] = -1;
    }
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    int src;
    cout << endl
         << "Enter Source Node : " << endl;
    cin >> src;
    level[src] = 0;
    dfs(src);
    // Print the distances
    for (int v = 0; v < n; v++)
    {
        cout << "Distance from " << src << " to " << v << ": " << level[v] << endl;
    }
}