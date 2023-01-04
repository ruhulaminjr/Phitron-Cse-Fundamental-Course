#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N] = {};
vector<int> adj_list[N] = {};

/*
Input:
4 5
1 3
2 1
2 4
3 2
3 4
output: cyle existed
input :
4 4
1 3
2 1
2 4
3 4
output : NO
*/
bool detect_cycle(int node)
{
    visited[node] = 1;
    for (int adj_node : adj_list[node])
    {
        /*
        1. run dfs on unvisited node
        2. if visited[node] == 1 found then cycle detected
        3. set explored node to visite[node] = 2;
        */
        if (visited[adj_node] == 0)
        {
            bool chk = detect_cycle(adj_node);
            if (chk)
            {
                return true;
            }
        }
        else if (visited[node] == 1)
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