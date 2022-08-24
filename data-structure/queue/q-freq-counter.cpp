#include <bits/stdc++.h>
#include "my-queue.h"
using namespace std;
int freqCounter(Queue<int> q, int k)
{
    int freq = 0;
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
        int temp = q.Front();
        if (temp == k)
            freq++;
        q.pop();
        q.push(temp);
    }
    return freq == 0 ? -1 : freq;
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
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        cout << freqCounter(q, val) << endl;
    }
}
/*

Given N integers, the task is to insert those elements in the queue. Also, given M integers,your task is to find the frequency of each number of M in the Queue.

Expected time complexity: O(N)

Sample Input
Sample output
8
1 2 3 4 5 2 3 1
5
1 3 2 9 10


2
2
2
-1
-1



Explanation: Frequency of 1 is 2. Frequency of 3 is 2. Frequency of 2 is 2. Frequency of 9 is -1 and Frequency of 10 is  -1 (since 9 and 10 are not there in the queue).
Reference: GFG-Queue Operation
*/