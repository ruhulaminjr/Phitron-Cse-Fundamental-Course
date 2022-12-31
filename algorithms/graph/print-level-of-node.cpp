#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N] = {};
int level[N] = {};
vector<int> adj_list[N];

void bfs_with_level(int src)
{
    queue<int> q;
    visited[src] = 1;
    level[src] = 0;
    q.push(src);
    while (!q.empty())
    {

        int newRoot = q.front();
        q.pop();
        for (int node : adj_list[newRoot])
        {
            if (visited[node] == 0)
            {
                visited[node] = 1;
                level[node] = level[newRoot] + 1;
                q.push(node);
            }
        }
    }
}

int main(void)
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs_with_level(0);
    for (int i = 0; i < n; i++)
    {
        cout << "Node : " << i
             << " -> Level : " << level[i] << endl;
    }
}
/*
input:
7 6
0 1
1 4
1 6
0 2
2 5
2 3
*/