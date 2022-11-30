#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
bool isBig(li mid, li s)
{
    int sum = 0;
    li num = mid;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    // cout << "Mid : " << mid << " Sum : " << sum << " S: "<<s << endl;
    if (mid - sum >= s)
    {
        return true;
    }
    return false;
}
int main(void)
{
    li n, s, sa, e;
    cin >> n >> s;
    sa = 0;
    e = n;
    li ans = 0;
    while (sa <= e)
    {
        // cout << s << " " << e << endl;
        li mid = (sa + e) / 2;
        if (isBig(mid, s))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            sa = mid + 1;
        }
    }
    if (ans > 0)
        ans = (n + 1) - ans;
    cout << ans << endl;
}