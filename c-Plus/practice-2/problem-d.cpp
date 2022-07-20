#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    char str[100];
    cin >> str;
    int len = strlen(str);
    cout << str[0] << len - 2 << str[len - 1] << endl;
}
/*
The word internationalization is sometimes abbreviated to i18n. This comes from the fact that there are 1818 letters between the first i and the last n.

You are given a string ss of length at least 33 consisting of lowercase English letters. Abbreviate ss in the same way.
*/