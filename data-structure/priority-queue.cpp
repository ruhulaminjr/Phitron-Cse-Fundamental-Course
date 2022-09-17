#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v(3, -1);
    v.push_back(999);
    for (auto el : v)
    {
        cout << el << " ";
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(21);
    pq.push(11);
    pq.push(33);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}