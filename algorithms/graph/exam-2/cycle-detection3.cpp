
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N] = {};
int parent[N] = {};
vector<int> adj_list[N];
bool detect_cycle(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
                parent[adj_node] = head;
            }
            else if (parent[head] != adj_node)
            {
                return true;
            }
        }
    }
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
            bool is_cycle_exist = detect_cycle(i);
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
