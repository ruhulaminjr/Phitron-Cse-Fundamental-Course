#include <bits/stdc++.h>
using namespace std;
string reverseStr(string str)
{
    int len = str.length();
    if (len <= 1)
    {
        return str;
    }
    string first = reverseStr(str.substr(0, len / 2));
    string second = reverseStr(str.substr(len / 2));
    return second + first;
    // return first + second;
}
int main(void)
{
    string st;
    cin>>st;
    string revst = reverseStr(st);
    cout<<revst<<endl;
}

/*
// Your friend wants you to reverse a string in a recursive way.He wants you to write a function reverse(string str) which takes a string input and returns the reversed string but this function has to be recursive.What is the base case ?

Write one or two examples of how you can solve the larger problem given the smaller problem is already solved
//  Can you write the generalised formula for this task
//  Implement the function in C++ Simulate your code for an example input.

// Example:
// Input : phitron
// Output : nortihp
*/