#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
const int N = 512;
vector<pair<int, int>> adj_list[N];
long long dist[N];
void dijstra(int s)
{
    priority_queue<pair<int, int>> pq;
    dist[s] = 0;
    pq.push({s, 0});
    while (!pq.empty())
    {
        pair<int, int> nd = pq.top();
        int u = nd.first;
        int currW = nd.second;
        pq.pop();
        if (dist[u] < currW)
        {
            continue;
        }
        for (auto adj_node : adj_list[u])
        {
            int v = adj_node.first;
            int w = adj_node.second;
            int maxd = max(w, currW);
            if (maxd < dist[v])
            {
                dist[v] = maxd;
                pq.push({v, maxd});
            }
        }
    }
}
int main(void)
{
    int T;
    cin >> T;
    for (int c = 1; c <= T; c++)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            adj_list[i].clear();
        }
        for (int i = 0; i < m; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            adj_list[u].push_back({v, w});
            adj_list[v].push_back({u, w});
        }
        for (int i = 0; i < n; i++)
        {
            dist[i] = INF;
        }
        int s;
        cin >> s;
        dijstra(s);
        cout << "Case " << c << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (dist[i] == INF)
            {
                cout << "Impossible" << endl;
            }
            else
            {
                cout << dist[i] << endl;
            }
        }
    }
}