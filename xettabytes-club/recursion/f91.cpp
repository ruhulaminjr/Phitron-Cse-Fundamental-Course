#include <bits/stdc++.h>
using namespace std;
typedef long long int li;
li f91(li n)
{
    int val;
    if (n <= 100)
    {
        val = 91;
    }
    else
    {
        val = n - 10;
    }
    return val;
}
int main(void)
{

    li n;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        printf("f91(%lld) = %lld\n", n, f91(n));
    }
}