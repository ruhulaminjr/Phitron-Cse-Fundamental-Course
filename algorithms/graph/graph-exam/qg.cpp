#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
vector<int> adj_list[N];
vector<bool> visited;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == false)
            {
                visited[adj_node] = true;
                q.push(adj_node);
            }
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    visited.resize(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        if (val == 0)
            continue;
        adj_list[val].push_back(i);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        bfs(u);
        if (visited[v])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        visited.assign(n + 1, false);
    }
}