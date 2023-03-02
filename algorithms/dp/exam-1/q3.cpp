#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int counter[N];
int dp[N];
int (int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return counter[1];
    }
    return max((n - 1), (n - 2) + counter[n] * n);
}
int main(void)
{
    int a;
    cin >> a;
    int m = 0;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        counter[b]++;
        dp[i] = -1;
        m = max(m, b);
    }
    cout << (m) << endl;
}


/*


                            (5)
                      /            \
                   (4)                5 * counter[5]
               /         \
            (3)             4 * counter[4]
         /       \
       (2)        3 * counter[3]
       /
     (1) + 2 * counter[2]
     /
 counter[1]


*/

/*
dp[0] = 0;
dp[1] = 1
*/