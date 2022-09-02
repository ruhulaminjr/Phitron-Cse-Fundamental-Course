#include <iostream>
#include "mystack.h"
using namespace std;
template <typename T>
T myMax(T a, T b)
{
    return a > b ? a : b;
}
int main(void)
{
    int x = 9 + 5;
    int y = x + 3;
    int z = y + x;
    Stacks<int> st;
    st.push(x + y);
    st.push(y + z);
    st.pop();
    st.push(y * z);
    st.push(x * y);
    st.pop();
    st.pop();
    while (st.size())
    {
        cout << st.pop() << " ";
    }
    cout << endl;
}
/*
Show the status of a STACK implemented by a linear linked list for the operations given below. Here, x= Last day of your birthday + 5, y=x+3, and z=y+x.	1.4*7=10

Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()

*/