#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N] = {};
vector<int> adj_list[N];
vector<int> counter(7, 0);

/*
Nodes = 6 ,Edge=6;
0--1-----2-------4--------6
         |       |
         |       |
         5-------3
6 7
0 1
2 4
2 1
5 2
3 5
4 3
4 6

output : 0 1 2 4 5 3 6

*/
/*
step 1 : initilize a visited array to check element visited
step 2 : use q data structure to store node
step 3 : run loop until q empty and push all adjacency node into the q;

*/

void bfs(int node)
{

    queue<int> q;
    q.push(node);
    visited[node] = 1;
    counter[node]++;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int adjNode : adj_list[head])
        {
            counter[adjNode]++;
            if (visited[adjNode] == 0)
            {
                visited[adjNode] = 1;
                q.push(adjNode);
                
            }
        }
    }
}
int main(void)
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs(0);
    cout << endl;
    cout << "count visited vertex: " << endl;
    for (int i = 0; i < counter.size(); i++)
    {
        cout << i << " " << counter[i] << endl;
    }
}