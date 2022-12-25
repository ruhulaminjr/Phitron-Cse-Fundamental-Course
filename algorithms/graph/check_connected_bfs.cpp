#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adj_list[N];
int visited[N] = {};
vector<int> bfs(int Node)
{
    queue<int> q;
    q.push(Node);
    visited[Node] = 1;
    vector<int> chk;
    chk.push_back(Node);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                q.push(adj_node);
                visited[adj_node] = 1;
                chk.push_back(adj_node);
            }
        }
    }
    cout << endl;
    return chk;
}

int main()
{

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    vector<int> arr = bfs(0);

    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 6)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "0 and 6 connected" << endl;
    }
    else
    {
        cout << "Not Connected" << endl;
    }
    return 0;
}
