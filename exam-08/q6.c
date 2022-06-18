#include <stdio.h>

int main(void)
{
    int num = 71737;
    printf("%d\n", num);
    int *p = &num;
    int **q = &p;
    int ***r = &q;
    ***r = 564;
    printf("%d\n", num);
}
/*

Make a pointer variable P which points to an integer variable. Make another pointer variable Q which points to the pointer P. Now make another pointer variable R which points to the pointer Q. Now change the value of that integer variable by accessing pointer R.
*/