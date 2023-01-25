#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int N = 1e5 + 5;
vector<int> parent;
vector<bool> visited;
vector<long long> d;
vector<pair<int, int>> adj_list[N];

void dijstra(int src)
{
    d[src] = 0;
    priority_queue<pair<long long, int>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        long long selected = pq.top().second;
        pq.pop();
        if (visited[selected] == true)
        {
            continue;
        }
        visited[selected] = true;

        for (auto adj_entry : adj_list[selected])
        {
            int adj_node = adj_entry.first;
            int adj_cst = adj_entry.second;
            if (d[selected] + adj_cst < d[adj_node])
            {
                d[adj_node] = d[selected] + adj_cst;
                parent[adj_node] = selected;
                pq.push({-d[adj_node], adj_node});
            }
        }
    }
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    parent.resize(n + 1, -1);
    visited.resize(n + 1, false);
    d.resize(n + 1, INF);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    dijstra(1);
    if (visited[n] == false)
    {
        cout << "-1" << endl;
        return 0;
    }
    int current = n;
    vector<int> path;
    while (true)
    {
        path.push_back(current);
        if (current == 1)
        {
            break;
        }
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}