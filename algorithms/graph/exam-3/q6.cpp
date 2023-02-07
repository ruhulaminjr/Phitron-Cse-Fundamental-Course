#include <bits/stdc++.h>
using namespace std;
vector<int> cats;
const int N = 1e5;
vector<int> adj_list[N];
int visited[N];
bool check(int src)
{
    for (int node : adj_list[src])
    {
        if (!visited[node])
        {
            return false;
        }
    }
    return true;
}
int ans = 0;
void dfs(int src, int m)
{
    visited[src] = 1;
    if (cats[src] > m)
    {
        return;
    }
    if (check(src) && cats[src] <= m)
    {
        ans++;
    }
    for (int adj_node : adj_list[src])
    {
        if (!visited[adj_node])
        {
            if (cats[adj_node])
            {
                cats[adj_node] += cats[src];
            }
            dfs(adj_node, m);
        }
    }
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int cat;
        cin >> cat;
        cats.push_back(cat);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 1;
    dfs(src, m);
    cout << ans-1<< endl;
}

