#include <bits/stdc++.h>
using namespace std;
class pq
{
private:
    vector<int> v;
    int leftChild(int idx)
    {
        return (idx * 2) + 1;
    }
    int rightChild(int idx)
    {
        return (idx * 2) + 2;
    }
    int parent(int idx)
    {
        return (idx - 1) * 2;
    }
    void heapify(int strIdx)
    {
        int left = leftChild(strIdx);
        int right = rightChild(strIdx);
        int small = strIdx;
        if (left < v.size() && v[left] < v[small])
        {
            small = left;
        };
        if (right < v.size() && v[right] < v[small])
        {
            small = right;
        }
        if (small != strIdx)
        {
            swap(v[small], v[strIdx]);
            heapify(small);
        }
    }

public:
    void push(int val)
    {
        v.push_back(val);
        int insertedIdx = v.size() - 1;
        while (v[insertedIdx] < v[parent(insertedIdx)])
        {
            // swap(v[insertedIdx], v[parent(insertedIdx)]);
            // cout<<insertedIdx<<"in idx "<<endl;
            if(insertedIdx <= 0) break;
            swap(v[insertedIdx], v[parent(insertedIdx)]);
            insertedIdx = parent(insertedIdx);
        }
    }
    void pop()
    {
        v[0] = v[v.size() - 1];
        v.pop_back();
        heapify(0);
    }
    int top()
    {
        return v[0];
    }
    bool empty()
    {
        return v.size() == 0;
    }
};
int main(void)
{
    pq P;
    P.push(5);
    P.push(3);
    P.push(21);
    P.push(7);
    while (!P.empty())
    {
        cout << P.top() << endl;
        P.pop();
    }
    cout << endl;
}