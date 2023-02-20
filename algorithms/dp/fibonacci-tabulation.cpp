#include <bits/stdc++.h>

using namespace std;
const int N = 101;
int dp[N];
/*
step 1 - fibo(1) == 1;
         fibo(2) == 1;

step 2 - if dp[n] != 1 == d[n]

step 3 - fibo(n-1) + fibo(n-2);
*/

int main(void)
{
    int n;
    cin >> n;
    // Define Base Case
    dp[1] = 1;
    dp[2] = 1;
    // Loop Throgh the state
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        // calculate the smaller sub problem
    }

    cout << dp[n] << endl;
}