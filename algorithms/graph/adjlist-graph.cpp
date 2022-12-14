#include <bits/stdc++.h>
using namespace std;
/*
    0----1
        / \
       2---3
0 -> 1
1 -> 0,2,3
2 -> 1,3
3 -> 1,2

*/
int main(void)
{
    int nodes = 4;
    vector<int> adjlist[nodes] = {};
    adjlist[0] = {1};
    adjlist[1] = {0, 2, 3};
    adjlist[2] = {1, 3};
    adjlist[3] = {1, 2};
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }
}