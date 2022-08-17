#include <bits/stdc++.h>
#include "mystack.h"

using namespace std;

int main(void)
{
    Stacks st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Count : " << st.size() << endl;
    while (!st.isEmpty())
    {
        cout << "Top Value " << st.topValue() << endl;
        cout << st.pop() << endl;
    }
}