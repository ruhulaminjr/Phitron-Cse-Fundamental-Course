
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N] = {};
vector<int> adj_list[N];
bool detect_cycle(int node, int parent)
{
    visited[node] = 1;
    for (int adj_node : adj_list[node])
    {
        if (adj_node == parent)
        {
            continue;
        }
        if (visited[adj_node] == 0)
        {
            if (detect_cycle(adj_node, node))
            {
                return true;
            }
        }
        else if (visited[adj_node] == 1)
        {
            return true;
        }
    }
    visited[node] = 2;
    return false;
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
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bool is_cycle_exist = detect_cycle(i, -1);
            if (is_cycle_exist)
            {
                ok = true;
                break;
            }
        }
    }
    if (ok)
    {
        cout << "Cycle Exist" << endl;
    }
    else
    {
        cout << "No Cycle Exist" << endl;
    }
}
