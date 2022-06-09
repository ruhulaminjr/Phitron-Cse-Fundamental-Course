#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// count words on a given strings
// input == my name is ruhul output == 4
int main(void)
{
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    int i = 0;
    bool word = true;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            word = true;
        }
        if (str[i] == ' ')
        {
            if (word == true)
            {

                count++;
                word = false;
            }
        }
        i++;
    }
    if (word == true)
    {
        count++;
    }
    printf("%d\n", count);
}