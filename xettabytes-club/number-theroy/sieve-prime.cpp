#include <bits/stdc++.h>
using namespace std;
vector<bool> marked(10000000, false);
bool isprime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
int main(void)
{
    int n;
    vector<int> prime;
    cin >> n;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)
        {
            prime.push_back(i);
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
    cout << endl;
}