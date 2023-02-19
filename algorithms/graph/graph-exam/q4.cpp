#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> adj_list[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int level[n + 1];
    bool visited[n + 1];
    queue<int> q;
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int fire;
        cin >> fire;
        q.push(fire);
        level[fire] = 0;
        visited[fire] = true;
    }
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int adj_node : adj_list[node])
        {
            if (visited[adj_node] == false)
            {
                visited[adj_node] = true;
                level[adj_node] = level[node] + 1;
                q.push(adj_node);
            }
        }
    }
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (max < level[i])
        {
            max = level[i];
        }
    }
    vector<int> maxArr;
    for (int i = 1; i <= n; i++)
    {
        if (max == level[i])
        {
            maxArr.push_back(i);
        }
    }
    cout << max << endl;
    int min = maxArr[0];
    for (int node : maxArr)
    {
        if (node < min)
        {
            min = node;
        }
    }
    cout << min << endl;
}

