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
int main(void)
{
    int nodes = 4;
    int adjmatrix[nodes][nodes] = {};

    adjmatrix[0][1] = 1;
    adjmatrix[1][0] = 1;

    adjmatrix[1][2] = 1;
    adjmatrix[2][1] = 1;

    adjmatrix[1][3] = 1;
    adjmatrix[3][1] = 1;

    adjmatrix[2][3] = 1;
    adjmatrix[3][2] = 1;

    for (int i = 0; i < nodes; i++)
    {
        cout << i << "->";
        for (int j = 0; j < nodes; j++)
        {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }
}
