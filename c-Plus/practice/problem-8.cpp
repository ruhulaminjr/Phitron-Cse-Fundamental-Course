#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int price = n * 800;
    int cashback = (n / 15) * 200;
    int pay = price - cashback;
    cout << pay << endl;
}