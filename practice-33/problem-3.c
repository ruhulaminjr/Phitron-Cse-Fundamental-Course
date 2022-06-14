#include <stdio.h>
int get_length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(void)
{
    char str[] = "My name is ruhul amin";
    int len = get_length(str);
    printf("length of string is %d\n", len);
}

/*
Write a function named get_length() which will take a string as parameter and return the length of that string without using any library function i.e. strlen.
*/