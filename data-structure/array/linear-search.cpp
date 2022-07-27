#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    char c;
    cout << "Do You Want To Search (Y/N)";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int el;
        cout << "Enter Element to Search: ";
        cin >> el;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == el)
            {
                flag = 1;
                cout << "Index Of El : " << i << " Position Of El: " << i + 1 << endl;
            }
        }
        if (flag == 0)
        {
            cout << "Element Not Found" << endl;
        }
        cout << "Do You Want Continue Searching (Y/N)";
        cin >> c;
    }
}