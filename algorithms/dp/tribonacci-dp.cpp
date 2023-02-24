#include <bits/stdc++.h>

using namespace std;
/*
step 1 -> define base case
step 2 -> if n state problem already solved than return already solve value from dp state
step 3 -> calculate sub problem of that problems and save the problem on dp state

*/
const int N = 101;
long long dp[N];
long long tribonacci(int n)
{
    if (n <= 3)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    return dp[n];
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << tribonacci(n) << endl;
}