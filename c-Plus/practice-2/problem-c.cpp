#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char str[1000000];
    cin >> str;
    int counter[25] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        int value = str[i] - 'a';
        counter[value]++;
    }
    char smallest = 'z';
    int check = 1;
    for (int i = 0; i <= 25; i++)
    {
        if (counter[i] == 0)
        {
            check = 0;
            char c = i + 'a';
            if (c < smallest)
            {
                smallest = c;
            }
        }
    }
    if (check)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << smallest << endl;
    }
}
/*
You are given a string SS consisting of lowercase English letters. Find the lexicographically (alphabetically) smallest lowercase English letter that does not occur in SS. If every lowercase English letter occurs in SS, print None instead.
*/