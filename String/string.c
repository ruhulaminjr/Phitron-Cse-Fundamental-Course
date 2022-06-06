
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // strcpy(a,b);
    // copy b string to a
    // strcat(a,b);
    // concat or merge b string into a
    int result = strcmp(a, b);
    printf("%d\n", result);
    // printf("%s %s\n", a, b);
}