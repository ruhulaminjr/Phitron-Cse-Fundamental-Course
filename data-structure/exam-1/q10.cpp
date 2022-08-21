#include <iostream>
#include "Ruhul-Stack.h"
using namespace std;

int main(void)
{
    Stacks<string> st;
    st.push("Ruhul");
    st.push("Amin");
    st.push("Jr.");
    st.push("Ruhul");
    st.push("Amin");
    string Midvalue = st.mid();
    cout << Midvalue << endl;
}

/*
You all know about the generic template we created in Module 23 as MYSTACK.h. Write a code that will provide the stack template with a new function named mid().

For Example: If st is a Stack Object and I call st.mid(), This will return the mid of element of the stack. Modify the Generic Stack Header file and Submit the Updated Template file as YOURNAME_STACK.h. (such as: MEHEDI_STACK.h)
*/