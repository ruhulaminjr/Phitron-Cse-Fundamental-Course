#include <bits/stdc++.h>
using namespace std;
int const N = 2e5;
int visited[N] = {};
vector<int> adj_list[N];
void dfs(int src)
{
    visited[src] = 1;
    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            dfs(adj_node);
        }
    }
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int count = 0;
    vector<int> roads;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            count++;
            roads.push_back(i);
            dfs(i);
        }
    }
    cout << count - 1 << endl;
    if (count > 1)
    {
        for (int i = 1; i < count; i++)
        {
            cout << roads[i - 1] << " " << roads[i] << endl;
        }
    }
}