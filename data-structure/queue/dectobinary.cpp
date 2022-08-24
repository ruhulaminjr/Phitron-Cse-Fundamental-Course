#include <iostream>
#include "my-queue.h"
using namespace std;
string decimalToBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        int bin = n % 2;
        binary += bin + '0';
        // cout<<bin<<" ";
        n = n / 2;
    }
    // cout<<endl;
    reverse(binary.begin(), binary.end());
    return binary;
}
int main(void)
{
    Queue<string> st;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string binary = decimalToBinary(i);
        st.push(binary);
    }
    while (!st.isEmpty())
    {
        cout << st.pop() << " ";
    }
    cout << endl;
}