#include <bits/stdc++.h>
using namespace std;

const int N = 102;
vector<int> adj_list[N];

int main(void)
{
    for (int i = 2; i < 101; i++)
    {
        for (int j = 2; j < 101; j++)
        {
            if (i * 2 == j)
            {
                adj_list[i].push_back(j);
            }
        }
    }
}