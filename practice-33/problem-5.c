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
void string_concat(char a[],char b[]){
    int i = 0;
    int alen = get_leng(a);
    while(b[i] != '\0'){
        a[alen] = b[i];
        i++;
        alen++;
    }
    a[alen] = '\0';

}
int main(void){
    char str1[100] = "My Name is : ";
    char str2[50] = "Ruhul-Amin";
    string_concat(str1,str2);
    printf("%s\n",str1);

}

/*

Write a function named string_concat() which will take two strings A and B as parameters and make concatenation of A and B into A without using any library function i.e. strcat
*/