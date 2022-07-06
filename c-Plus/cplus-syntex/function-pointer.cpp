#include <bits/stdc++.h>

using namespace std;
void fun(int **x)
{
    **x = 59;
}
int main(void)
{
    int a = 10;
    int *pa = &a;
    int **ppa = &pa;
    fun(ppa);
    cout << a << endl;
}