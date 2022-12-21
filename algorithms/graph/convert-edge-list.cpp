#include <bits/stdc++.h>
using namespace std;
void printadjmatrixList(vector<int> adjlist[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }
}
void printadjmatrix(int matrix[4][4], int nodes)
{
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    // TODO: Declare your favorite data structures here.
    vector<vector<int>> edgeList;
    for (int i = 0; i < m; i++)
    { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        edgeList.push_back({u, v});
        // TODO: Do stuffs with u and v
    }
    int adjmatrix[4][4] = {};
    for (int i = 0; i < edgeList.size(); i++)
    {
        adjmatrix[edgeList[i][0]][edgeList[i][1]] = 1;
    }
    printadjmatrix(adjmatrix, n);

    // TODO: Print your representation like shown in module - 2

    return 0;
}