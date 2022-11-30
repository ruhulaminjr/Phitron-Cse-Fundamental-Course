#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
int flag = 0;
void printreverseRoot(li num)
{
    if (cin >> num)
    {
        printreverseRoot(num);
    }
    flag++;
    if (flag > 1)
    {
        printf("%0.4f\n", sqrt(num));
    }
}
int main(void)
{
    printreverseRoot(0);
}
