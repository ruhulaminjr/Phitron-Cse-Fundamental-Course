/*
Take your name as input and add “Phitron Member “ at first.

For example:
Input:
Rahat
Output:
Phitron Member Rahat

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    printf("Input:\n");
    scanf("%s", str);
    printf("%s\n", str);
    char str2[] = "Phitron Member ";
    char name[40];
    for (int i = 0; i < strlen(str2); i++)
    {
        name[i] = str2[i];
    }
    int j = strlen(str2);
    for (int i = 0; i < strlen(str); i++, j++)
    {
        name[j] = str[i];
    }
    name[j] = '\0';
    printf("%s\n", name);
}