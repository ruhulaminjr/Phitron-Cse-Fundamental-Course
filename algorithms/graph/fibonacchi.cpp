#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int num1 = fibo(n - 1);
    int num2 = fibo(n - 2);
    return num1 + num2;
}
/*
0,1,1,2,3,5,8,13,21
0,1,2,3,4,5,6,7,8
*/
int main(void)
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}