#include <bits/stdc++.h>
#include "my-queue.h"
using namespace std;

void reverse(Queue<int> &q, int k)
{
    if (k <= 0)
    {
        return;
    }
    int val = q.pop();
    k--;
    reverse(q, k);
    q.push(val);
}
void reverseK(Queue<int> &q, int k)
{
    reverse(q, k);
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.Front());
        q.pop();
    }
}

int main(void)
{
    Queue<int> q;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    reverseK(q, k);
    while (q.size())
    {
        cout << q.pop() << " ";
    }
    cout << endl;
}