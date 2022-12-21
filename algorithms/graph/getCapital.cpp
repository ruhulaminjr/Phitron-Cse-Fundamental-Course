#include <bits/stdc++.h>
using namespace std;
string getCapital(string str)
{
    if (str == "")
    {
        return str;
    }
    else if (isupper(str[0]))
    {
        return str.substr(0, 1);
    }
    return getCapital(str.substr(1, str.length()));
}

int main(void)
{
    string s = getCapital("thisStRIng");
    cout << s << endl;
}

/*
Write a recursive function getCapital(string str) that takes a string as input and returns the first capital letter of the input string. Follow all the steps of problem 4.
Example:
Input: thisStRIng
Output: S
*/