#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e17;
const int N = 2500 + 25;
vector<pair<int, int>> adj_list[N];
long long d[N];

int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    d[1] = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, -1 * w});
        adj_list[v].push_back({u, -1 * w});
    }

    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (auto node : adj_list[u])
            {
                int v = node.first;
                int w = node.second;
                if (d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }
    cout << d[n] << endl;
}