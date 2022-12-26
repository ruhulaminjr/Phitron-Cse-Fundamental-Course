#include <bits/stdc++.h>
using namespace std;
bool checkBidirectionoal(vector<int> adj_list[], int nodes)
{
    for (int i = 0; i < nodes; i++)
    {
        for (int v : adj_list[i])
        {

            if (find(adj_list[v].begin(), adj_list[v].end(), i) == adj_list[v].end())
            {
                // If there is no edge from v to i, the graph is not bi-directional
                return false;
            }
        }
    }
    return true;
};
int main()
{

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
    vector<int> adj_list[n + 1] = {};
    for (int i = 0; i < m; i++)
    { // loop over the number of edges
        int u, v;
        cin >> u >> v; // There exists a directed edge from u to v
        adj_list[u].push_back(v);
    }
    // printing the graph 
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> ";
    //     for (int j = 0; j < adj_list[i].size(); j++)
    //     {
    //         cout << adj_list[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (checkBidirectionoal(adj_list, n))
    {
        cout << "bi-directionoal " << endl;
    }
    else
    {
        cout << "Not bi-directionoal" << endl;
    }

    return 0;
}
/*
Directed INput
6 8
0 3
3 0
0 5
5 1
1 0
5 4
4 5
2 4
Undirected Input :
3 4
0 1
1 0
2 1
1 2
*/
