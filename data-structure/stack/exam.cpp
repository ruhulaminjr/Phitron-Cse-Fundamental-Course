#include <bits/stdc++.h>
#include "mystack.h"

Stacks<char> Stack;
int main()
{
    char Str1[4] = {'\0'};
    char Str2[4] = {'\0'};
    int i;
    strcpy(Str1, "CSE");
    for (i = 0; i < 3; ++i)
    {
        Stack.push(Str1[i]);
    }
    for (i = 0; i < 3; ++i)
    {
        Str2[i] = Stack.pop();
    }
    printf("%s", Str2);
    return 0;
}
