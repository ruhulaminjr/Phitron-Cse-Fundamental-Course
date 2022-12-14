#include <bits/stdc++.h>
using namespace std;
/*
0 -> 1
1 -> 0,2,3
2 -> 1,3
3 -> 1,2

   3
0---->1
  7
1--->2
   4
0---->5
   9
3----->0

*/
int main(void)
{
    int nodes = 4;
    vector<pair<int, int>> adj_list[nodes];
    adj_list[0] = {{1, 3}, {5, 4}};
    adj_list[1] = {{2, 7}};
    adj_list[3] = {{0, 9}};

    for (int i = 0; i < nodes; i++)
    {
        cout << i << " --> ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << "(" << adj_list[i][j].first << "," << adj_list[i][j].second << ")"
                 << ",";
        }
        cout << endl;
    }
}