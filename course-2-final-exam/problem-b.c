#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    scanf("%s", str);
    int len = strlen(str);
    int acount = 0;
    int nota = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            acount++;
        }
        if (str[i] != 'a')
        {
            nota++;
        }
    }
    int count = len;
    if (acount <= nota)
    {
        count = len - ((nota - acount) + 1);
    }

    printf("%d\n", count);
}
// 7
// 4
// 3
// y y y y
// a a a
// y + y
/*
Ashiq doesn't love strings. But he really likes letter 'a'. He assumes a string beautiful if more than half of it's character are 'a'. For example some beautiful strings are "baaba", "a", "aqawa" , but "abb", "waeaia" are not.
As Ashiq only loves beautiful strings, so he wanted to erase some character (possibly zero) from the string s such that the string become longest beautiful string. So he wants to know what will be the size of longest string remaining after erase some character( possibly zero) to get a beautiful string.
It is guaranteed that the string will consist of atleast one 'a'. So answer always exists.
*/
/*
Input :
yayayya
Output :
5

Input :
aa
Output :
2
*/