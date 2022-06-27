#include <stdio.h>
int main(void)
{
    char str[100001];
    int l, r;
    scanf("%d %d %s", &l, &r, str);
    l--;
    r--;
    while (l < r)
    {
        int temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    printf("%s\n", str);
}

/*
Bitman gifts you some integers LL, RR, and a string SS consisting of lowercase English letters.
Print this string after reversing (the order of) the LL-th through RR-th characters.
INPUT >> 3 7 abcdefgh
OUTPUT >> abgfedch

INPUT
4 13
merrychristmas
OUTPUT
meramtsirhcyrs
INPUT
4 13
merrychristmas
OUTPUT
meramtsirhcyrs
*/