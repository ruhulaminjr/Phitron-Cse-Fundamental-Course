#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
const int INF = 1e5;
struct Edge
{
    int u;
    int v;
    int w;
};
vector<Edge> edgeList = {{0, 1, 6}, {1, 2, 3}, {2, 3, 1}, {3, 1, -3}, {1, 4, 2}};
int d[N];
int parent[N];

int main(void)
{
    int n = 5;
    // int n, m;
    // cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    // for (int i = 0; i < m; i++)
    // {
    //     int u, v, w;
    //     cin >> u, v, w;
    //     edgeList.push_back({u, v, w});
    // }
    bool has_negative_cycle = false;
    int last_update_node = -1;
    for (int i = 1; i <= n; i++)
    {
        for (auto ne : edgeList)
        {
            int u = ne.u;
            int v = ne.v;
            int w = ne.w;
            if (d[u] + w < d[v])
            {
                d[v] = d[u] + w;
                parent[v] = u;
                if (i == n)
                {
                    has_negative_cycle = true;
                    last_update_node = v;
                }
            }
        }
    }
    if (has_negative_cycle)
    {
        cout << "Graph Contains Negative Cycle" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> " << d[i] << endl;
    }
}