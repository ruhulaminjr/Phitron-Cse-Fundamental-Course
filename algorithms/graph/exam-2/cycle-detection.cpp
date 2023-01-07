#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N] = {};
vector<int> adj_list[N] = {};

bool bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                q.push(adj_node);
                visited[adj_node] = 1;
            }
            else if (visited[adj_node] == 1)
            {
                return true;
            }
        }
        visited[head] = 2;
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
    }
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bool is_cycle_exist = bfs(i);
            // cout << "c : " << is_cycle_exist << endl;
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