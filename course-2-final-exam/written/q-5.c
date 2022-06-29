#include <stdio.h>

int main(void)
{
    char str[1000];
    scanf("%s", str);
    int counter[10] =  {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int value = str[i] - '0';
            counter[value]++;
        }
    }
    int check = 1;
    for (int i = 0; i < 10; i++)
    {
        if(counter[i] <=0){
            check = 0;
            break;
        }
    }
    if(check){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}

/*
Write a C program that takes a string as input and tell if that string contains all digits from 0 to 9. The maximum length of string could be 1000.

অনুবাদঃ একটি C প্রোগ্রাম লিখ যা একটি স্ট্রিংকে ইনপুট হিসাবে নেয় এবং সেই স্ট্রিংটিতে 0 থেকে 9 পর্যন্ত সমস্ত সংখ্যা আছে কিনা তা বলে৷ স্ট্রিংয়ের সর্বাধিক দৈর্ঘ্য 1000 হতে পারে৷

For example:
Input 1:
Ab1DH5shb0djb4r1r5rgr1
Output 1:
NO

Input 2:
1hHfbG5D122Dj887D4HYy9520G63F14F6pLmmn578
Output 2:
YES

*/