#include <bits/stdc++.h>
using namespace std;
void printCombination(int n, int i, vector<int> &v)
{
    if (n == 0)
    {
        for (int num : v)
        {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    if (n < 0)
    {
        return;
    }

    for (int j = i; j <= n; j++)
    {
        v.push_back(j);
        printCombination(n - j, j, v);
        v.pop_back();
    }
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> v;
    printCombination(n, 1, v);
}
