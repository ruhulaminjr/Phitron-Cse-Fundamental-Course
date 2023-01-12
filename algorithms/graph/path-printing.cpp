#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
vector<int> adj_list[N];
int visited[N] = {};
int level[N] = {};
int parent[N] = {};
void bfs(int src)
{
    visited[src] = 1;
    level[src] = 1;
    parent[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                parent[adj_node] = head;
                q.push(adj_node);
            }
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
    int src = 1;
    bfs(src);
    bool isPossible = visited[n];
    if (!isPossible)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vector<int> path;
    int selectedNode = n;
    while (true)
    {
        path.push_back(selectedNode);
        if (selectedNode == src)
        {
            break;
        }
        selectedNode = parent[selectedNode];
    }
    reverse(path.begin(), path.end());
    cout << level[n] << endl;
    for (int node : path)
    {
        cout << node << " ";
    }
    cout << endl;
}