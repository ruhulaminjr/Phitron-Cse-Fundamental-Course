#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
vector<int> adj_list[N];
const int INF = 1e9;
vector<bool> visited;
int level[N];
int L[N];
int a = 0;
void dfs(int src)
{
    visited[src] = true;
    level[src] = a++;
    for (int adj_node : adj_list[src])
    {
        dfs(adj_node);
    }
    L[src] = a++;
}
int main(void)
{
    int n, src = -1;
    cin >> n;
    visited.resize(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        if (val != 0)
        {
            adj_list[val].push_back(i);
        }
        else
        {
            src = i;
        }
        level[i] = INF;
        L[i] = INF;
    }
    int m;
    cin >> m;
    dfs(src);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (level[u] < level[v] && L[u] > L[v])
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}