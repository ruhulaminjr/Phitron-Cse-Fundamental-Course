#include <stdio.h>

int main(void)
{
    // int a = 10;
    // printf("Address of a >> %p Value of a is %d\n", &a, a);
    // int *p = &a;
    // printf("Address of p >> %p Value of p is %p\n", &p, p);
    int c = 362436;
    int *p = &c;
    int **q = &p;
    printf("Value of C -> %d Address of C -> %p\n",c,&c);
    printf("Value of p -> %p Address of p -> %p\n",p,&p);
    printf("Value of q -> %p Address of q -> %p \n",q,&q);
}