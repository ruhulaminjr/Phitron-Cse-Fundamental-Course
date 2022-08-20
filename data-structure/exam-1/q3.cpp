#include <bits/stdc++.h>
using namespace std;
int *makePreSum(int *arr, int n)
{
    int *preSum = new int[n];
    preSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        preSum[i] = arr[i] + preSum[i - 1];
    }
    return preSum;
}
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int earned[d];
        int spend[d];
        for (int i = 0; i < d; i++)
        {
            cin >> earned[i];
        }
        for (int i = 0; i < d; i++)
        {
            cin >> spend[i];
        }
        int *earnedSum = makePreSum(earned, d);
        cout << endl;
        int *spendSum = makePreSum(spend, d);
        int q;
        cin >> q;
        int result[q] = {0};
        for (int i = 0; i < q; i++)
        {
            int idx;
            cin >> idx;
            int value = earnedSum[idx] - spendSum[idx];
            if (value >= 0)
            {
                result[i] = 1;
            }
            else
            {
                result[i] = -1;
            }
        }
        for (int i = 0; i < q; i++)
        {
            if (result[i] >= 0)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << endl;
    }
}
/*
3	Farina is a hard worker. But she also loves shopping a lot. Each day she earns some money and spends some on shopping. Fortunately, she has a credit card without any restrictions (it can have any amount of negative/positive balance). Initially, her credit card has a balance of 0. But she becomes UPSET when her credit card balance goes negative otherwise, she remains HAPPY.

Input:

The first line contains a number of Test Case T. Each of the test cases contains the following lines:
The first line contains the number of days D when Farina has earned some money.
The next line contains D space-separated integers indexed from 0 to D-1 which denotes the amount earned by Farina on an ith day.
The next line contains D space-separated integers indexed from 0 to D-1 which denotes the amount spent by Farina for shopping on an ith day.
The next line contains an integer Q that denotes the number of queries.
Each of the following Q lines contains an integer x denoting the query of the status of Farina.
Output:
For each Test case there will be a new line where For each query Print 0 if Farina is UPSET otherwise print 1.
Sample
Input
Output
Explanation
1
2
5
10 5 2 3 1
8 15 1 2 10
3
0
1
3
3
7 10 1
3 2 7
1
2
1 0 0
1
Number of days: 5
Farina's earning: 10 5 2 3 1
Farina's expense: 8 15 1 2 10
Number of queries: 3

After 0th day Farina's balance is (10 – 8) = 2 which is positive, so she is HAPPY.

After 1st day Farina's balance is (10+5 - 8 - 15) = -8 which is negative, so she is UPSET.
2
1
4
10 1 1 2
7 4 4 4
2
1
3
1 0


After 1st day Farina's balance is (10+1 - 7 - 4) = 0 which is not negative, so she is HAPPY.


*/