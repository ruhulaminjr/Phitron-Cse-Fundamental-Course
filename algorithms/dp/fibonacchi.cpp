#include <bits/stdc++.h>
using namespace std;
long long arr[101];
long long fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    if (arr[n] != 0)
    {
        return arr[n];
    }
    arr[n] = fibo(n - 1) + fibo(n - 2);
    return arr[n];
}
int main(void)
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}