#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    int n, e;
    cin >> n >> e;
    vector<bool> visited(e+1,false);
    vector<int> v[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    int source;
    cin >> source;
    queue<int> q;
    q.push(source);
    int count = 0;
    while (!q.empty())
    {
        int el = q.front();
        q.pop();
        if (visited[el])
            continue;
        for (int i = 0; i < v[el].size(); i++)
        {
            int p = v[el][i];
            if (visited[p] == false)
            {
                q.push(p);
            }
        }
        count++;
        visited[el] = true;
    }
    if (count != 0)
        cout << count - 1 << endl;
    else{
        cout<<count<<endl;
    }
}