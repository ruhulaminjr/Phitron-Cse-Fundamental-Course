#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main(void)
{
    char num1[100], num2[100], sum[100];
    scanf("%s %s", num1, num2);
    strrev(num1);
    // reverse number string
    strrev(num2);
    int i = 0, j = 0, k = 0, l = 0;
    // intial loop variable
    printf("%s %s\n", num1, num2);
    while (i < strlen(num1) && j < strlen(num2))
    {
        // loop run until one of number ends
        int add = ((num1[i] - '0') + (num2[j] - '0') + k) % 10;
        k = ((num1[i] - '0') + (num2[j] - '0')) / 10;
        printf("%d\n", add);
        sum[l] = add + '0';
        i++;
        j++;
        l++;
    }
    strrev(sum);
    printf("%s\n", sum);
}