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
    char num1[100], num2[100], sum[101];
    scanf("%s %s", num1, num2);
    strrev(num1);
    // reverse number string
    strrev(num2);
    int i = 0, j = 0, k = 0, l = 0;
    // intial loop variable
    while (i < strlen(num1) && j < strlen(num2))
    {
        // loop run until one of number ends
        int add = ((num1[i] - '0') + (num2[j] - '0') + k) % 10;
        k = ((num1[i] - '0') + (num2[j] - '0')) / 10;
        sum[l] = add + '0';
        i++;
        j++;
        l++;
    }
    while (i < strlen(num1))
    {
        int add = ((num1[i] - '0') + k);
        sum[l] = (add % 10) + '0';
        k = add / 10;
        i++;
        l++;
    }
    while (j < strlen(num2))
    {
        int add = ((num2[j] - '0') + k);
        sum[l] = (add % 10) + '0';
        k = add / 10;
        j++;
        l++;
    }
    if (k > 0)
    {
        sum[l] = k + '0';
    }

    strrev(sum);
    printf("%s\n", sum);
}