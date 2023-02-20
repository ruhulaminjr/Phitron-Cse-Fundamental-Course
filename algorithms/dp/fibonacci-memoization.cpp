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
int fibo(int n)
{
    if (n <= 2)
        return 1; // Base Case

    // checking if n already calculate
    if (dp[n] != -1)
        return dp[n];

    // calclutate smaller sub problem
    int ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout<<fibo(n)<<endl;
}