#include <bits/stdc++.h>
using namespace std;
void printPrimeNumber(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(void)
{
    int n;
    cin >> n;

    printPrimeNumber(n);
}