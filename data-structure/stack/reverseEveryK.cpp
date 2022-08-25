#include <bits/stdc++.h>
using namespace std;
void reverseEveryK(int n, int k, queue<int> &q)
{
    int x = n / k;
    int y = n % k;
    stack<int> st;
    while (x > 0)
    {
        int chk = k;
        while (chk > 0)
        {
            st.push(q.front());
            q.pop();
            chk--;
        }
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        x--;
    }
    while (y > 0)
    {

        while (y > 0)
        {
            st.push(q.front());
            q.pop();
            y--;
        }
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
}

int main(void)
{
    queue<int> q;
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    reverseEveryK(n, k, q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}