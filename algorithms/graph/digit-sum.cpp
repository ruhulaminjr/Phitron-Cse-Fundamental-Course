#include <bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return (n % 10) + digitSum(n / 10);
}
int main(void)
{
    int sum = digitSum(7464);

    cout << sum << endl;
}

/*
Write a recursive function digitSum(int n) that takes a non-negative integer as input and returns the sum of its digits. Follow all the steps of problem 4.
Example:
    Input: 7464
    Output: 21
    Explanation: 7 + 4 + 6 + 4 = 21
*/