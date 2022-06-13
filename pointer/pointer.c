#include <stdio.h>

int main(void)
{
    // int a = 10;
    // printf("Address of a >> %p Value of a is %d\n", &a, a);
    // int *p = &a;
    // printf("Address of p >> %p Value of p is %p\n", &p, p);
    // int c = 362436;
    // int *p = &c;
    // int **q = &p;
    // printf("Value of C -> %d Address of C -> %p\n",c,&c);
    // printf("Value of p -> %p Address of p -> %p\n",p,&p);
    // printf("Value of q -> %p Address of q -> %p \n",q,&q);
    // printf("Value of q after dereferencing %p and value of p is %p value of c is %d \n", *q, p, **q);
    int arr[5] = {10, 20, 30, 40, 50};
    *(arr + 2) = -33;
    // printf("%d \n",arr[2]);
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        // arr = arr +1;
        // arr is constant pointer
        *ptr++;
    }
    printf("\n");
}