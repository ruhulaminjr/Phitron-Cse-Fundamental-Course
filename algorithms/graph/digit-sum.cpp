#include <bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return (n % 10) + digitSum(n / 10);
}
int main(void)
{
    int sum = digitSum(7464);

    cout << sum << endl;
}