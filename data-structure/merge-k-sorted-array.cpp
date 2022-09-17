#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PAIR;
int main(void)
{
    int k;
    cin >> k;
    vector<vector<int>> allNodes(k);
    for (int i = 0; i < k; i++)
    {
        int size;
        cin >> size;
        allNodes[i] = vector<int>(size);
        for (int j = 0; j < size; j++)
        {
            cin >> allNodes[i][j];
        }
    }
    vector<int> idx(k, 0);
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({allNodes[i][0], i});
    }
    while (!pq.empty())
    {
        PAIR x = pq.top();
        pq.pop();
        if(idx[x.second]+1 < allNodes[x.second].size()){
            
        }
    }
}

/*
3
3
2 4 12
3
5 8 9
2
3 7
*/