#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int N = 1e5;
vector<pair<int, int>> adj_list[N];
vector<bool> visited;
vector<int> d;

int nodes, edges;

void dijstra(int src)
{
    d[src] = 0;
    for (int i = 0; i < nodes; i++)
    {
        int selected = -1;
        for (int j = 1; j <= nodes; j++)
        {
            if (visited[j] == true)
                continue;
            if (selected == -1 || d[selected] > d[j])
            {
                selected = j;
            }
        }
        visited[selected] = true;
        for (auto adj_entry : adj_list[selected])
        {
            int adj_node = adj_entry.first;
            int adj_weight = adj_entry.second;
            if (d[selected] + adj_weight < d[adj_node])
            {
                d[adj_node] = d[selected] + adj_weight;
            }
        }
    }
}
int main(void)
{
    cin >> nodes >> edges;
    d.resize(nodes, INF);
    visited.resize(nodes, false);
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    int src = 1;
    dijstra(src);
    for (int i = 1; i <= nodes; i++)
    {
        cout << " i : " << i << " cost : " << d[i] << " " << endl;
    }
}

/*
5 6
1 2 2
1 5 8
1 4 7
2 3 1
3 5 2
4 5 1
*/