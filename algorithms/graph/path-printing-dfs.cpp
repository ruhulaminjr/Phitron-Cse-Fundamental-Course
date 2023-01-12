#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N] = {};
int level[N] = {};
int parent[N];
vector<int> adj_list[N];
void dfs(int src)
{
    visited[src] = 1;
    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            level[adj_node] = level[src] + 1;
            parent[adj_node] = src;
            dfs(adj_node);
        }
    }
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
    int src = 1;
    int dst = n;
    level[src] = 1;
    parent[src] = -1;
    dfs(src);
    bool chk = visited[dst];
    if(!chk){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<int> roads;
    int selected = dst;
    while(true){
        roads.push_back(selected);
        if(selected == src){
            break;
        }
        selected = parent[selected];

    }
    reverse(roads.begin(),roads.end());
    cout<<level[dst]<<endl;
    for(int node: roads){
        cout<<node<<" ";
    }
    cout<<endl;
}