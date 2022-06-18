#include <stdio.h>
#include <string.h>
int check_palindrome(char str[])
{
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    int count = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            count++;
        }
        i++;
        j--;
    }
    return count;
}
int main(void)
{
    printf("%d\n", check_palindrome("abcdba"));
}
/*
You know palindromes, right? Now make a function named check_palindrome() which will take a string as a parameter and return the minimum number of characters you need to change so that the string can become palindrome. You can’t add or delete any character.
For example: check_palindrome(“abcdba”) will return 1 as you can change the character of index 2 to ‘d’ or character of index 3 to ‘c’ to make it palindrome.
*/
// abcdba
// a >> a
// b >> b
// c >> d
//