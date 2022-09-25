#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool visited[100];

void BSF(int source)
{
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int popEl = q.front();
        cout << popEl << " ";
        q.pop();
        if (visited[popEl] == true)
            continue;
        for (int i = 0; i < v[popEl].size(); i++)
        {
            int adj = v[popEl][i];
            if(visited[adj] == false) q.push(adj);
        }
        visited[popEl] = true;
    }
    cout << endl;
}
int main(void)
{
    int V, e;
    cin >> V >> e;
    for (int i = 0; i < e; i++)
    {
        int a1, a2;
        cin >> a1 >> a2;
        v[a1].push_back(a2);
        v[a2].push_back(a1);
    }
    BSF(0);
    cout << endl;
}

/*
6 7
5 3
4 5
1 0
1 2
1 3
3 0
4 3
*/