#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string st = "Din The Day";
    cout << st << endl;
    cout << st.length() << endl;
    st.resize(7);
    cout << st.size() << endl;
    cout << st << endl;
    st.clear();
    cout << st << endl;
    if (st.empty())
    {
        cout << "String st is cleared" << endl;
    }
}