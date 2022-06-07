/*
Write a C code which takes an string of small alphabets as input which size will be maximum 100 and do the following:
Print the index of vowels in that string. Index of that string starts from 0.

For example:
Input:
abdeufigoh
Output:
0 3 4 6 8

*/

#include <stdio.h>

int main(void)
{
    char str[100];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}