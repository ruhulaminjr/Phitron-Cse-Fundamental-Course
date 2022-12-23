#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adjacency_list[N];
int visited[N] = {};
/*
Nodes = 6 ,Edge=6;
0--1-----2       4--------6
         |       |
         |       |
         5-------3
6 6
0 1
2 1
5 2
3 5
4 3
6 4

Output:0 1 2 5 3 4 6

*/
void dfs(int node)
{
    cout << node << " ";
    visited[node] = 1;
    for (int child : adjacency_list[node])
    {
        if (visited[child] == 0)
        {
            dfs(child);
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
        cin >> u>>v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }
    dfs(0);
    cout << endl;
}