#include <bits/stdc++.h>
using namespace std;

/*
    0----1
        / \
       2---3
0->1
1->0
1->2
2->1
1->3
3->1
2->3
3->2
*/
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
int main(void)
{
    int nodes = 4;
    int adjmatrix[nodes][nodes] = {
        {0, 1, 0, 0},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 1, 0},
    };
    vector<int> adjlist[nodes] = {{1}, {0, 2, 3}, {1, 3}, {1, 2}};

    vector<int> convertedadjlist[nodes];
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (adjmatrix[i][j] == 1)
            {
                convertedadjlist[i].push_back(j);
            }
        }
    }
    // printadjmatrixList(convertedadjlist, nodes);
    int convertedadjmatrix[4][4] = {};
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            convertedadjmatrix[i][adjlist[i][j]] = 1;
        }
    }
    printadjmatrix(convertedadjmatrix, nodes);
}
// Write a program to convert an adjacency matrix to an adjacency list.Similarly, write a program to convert an adjacency list to an adjacency matrix.Compare the time and space complexity of both programs.You can assume the graph is undirected and unweighted.
