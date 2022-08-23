#include <bits/stdc++.h>
#include "my-queue.h"
using namespace std;

typedef pair<string, char> mytype;
int main(void)
{
    Queue<mytype> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        char b;
        cin >> a >> b;
        q.push(make_pair(a, b));
    }
    if (!q.isEmpty())
    {
        mytype chk = q.Front();
        cout << "Top Value of Q : ";
        cout << chk.first << " | " << chk.second << endl;
    }
    if (!q.isEmpty())
    {
        mytype chk = q.Back();
        cout << "Back Value of Q : ";
        cout << chk.first << " | " << chk.second << endl;
    }
    cout << "All Value of Ques : " << endl;
    while (!q.isEmpty())
    {
        mytype chk = q.pop();
        cout << chk.first << " | " << chk.second << endl;
    }
    cout << endl;
}