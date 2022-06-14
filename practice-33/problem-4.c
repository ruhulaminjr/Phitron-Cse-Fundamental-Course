#include <stdio.h>
int get_leng(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}
void string_copy(char a[], char b[]);
int main(void)
{
    char a[100] = "My name is : ";
    char b[] = "My Name is Ruhul Amin";
    string_copy(a, b);
    printf("%s\n", a);
}
void string_copy(char a[], char b[])
{
    int lenb = get_leng(b);
    int i;
    for (i=0; i < lenb; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';
}
/*
Write a function named string_copy() which will take two strings A and B as parameters and make copy of B into A without using any library function i.e. strcpy
*/