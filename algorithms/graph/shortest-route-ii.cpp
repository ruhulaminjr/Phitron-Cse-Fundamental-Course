#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int N = 1e5;
vector<pair<int, int>> adj_list[N];
bool visited[N];
vector<int> d;
int n, e, q;
void dijstra(int src)
{
    d[src] = 0;
    for (int i = 0; i < n; i++)
    {
        int selected = -1;
        for (int j = 1; j <= n; j++)
        {
            if (visited[j] == true)
            {
                continue;
            }
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
            // relax
            if (d[selected] + adj_weight < d[adj_node])
            {
                d[adj_node] = d[selected] + adj_weight;
            }
        }
    }
}
int main(void)
{

    cin >> n >> e >> q;
    d.resize(n, INF);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    while (q--)
    {
        int src, dst;
        cin >> src >> dst;
        dijstra(src);
        // if (dst >= d.size())
        // {
        //     cout << "-1" << endl;
        // }
        // else
        // {
        //     cout << d[dst] << endl;
        // }
    }
}