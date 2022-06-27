#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int pow = 25;
    printf("%d\n", pow);
}
/*
Take an integer value N and print the last two digits of 5N. But N could be very big, so be careful in calculating 5N.
INPUT
The only line of the input contains a single integer n (2 ≤ n ≤ 2·1018) — the power in which you need to raise number 5.
OUTPUT
Output the last two digits of 5n without spaces between them.
Sample
2
OUTput
25
*/