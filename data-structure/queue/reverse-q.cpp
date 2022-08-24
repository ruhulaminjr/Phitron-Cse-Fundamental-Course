#include <bits/stdc++.h>
#include "my-queue.h"
using namespace std;

void reverseQ(Queue<int> &q)
{
    if (q.size() == 0)
    {
        return;
    }
    int value = q.pop();
    reverseQ(q);
    q.push(value);
}
int main(void)
{
    Queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    reverseQ(q);
    while (!q.isEmpty())
    {
        cout << q.pop() << " ";
    }
    cout << endl;
}