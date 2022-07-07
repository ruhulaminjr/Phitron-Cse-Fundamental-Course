#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char str[1000000];
    cin >> str;
    for (int i = 0; str[i] != '\0'; i += 2)
    {
        cout << str[i];
    }
    cout << endl;
}
/*
You are given a string ss consisting of lowercase English letters. Extract all the characters in the odd-indexed positions and print the string obtained by concatenating them. Here, the leftmost character is assigned the index 11.
*/