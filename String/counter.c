#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    scanf("%s", str);
    int counter[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        char value = str[i] - 'a';
        counter[value]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        char value = i - 'a';
        if (counter[value] > 0)
            printf("value = %c count %d\n", i, counter[value]);
    }
}