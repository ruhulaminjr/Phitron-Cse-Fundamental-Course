#include <stdio.h>
void set_min_max(int *a,int *b){
    int min =  *a < *b ? *a : *b;
    int max =  *a > *b ? *a : *b;
    *a= min;
    *b = max;

}
int main(void){
    int x = 500;
    int z = 333;
    printf("%d %d\n",x,z);
    set_min_max(&x,&z);
    printf("%d %d\n",x,z);
}

/*
Write a function named set_min_max() which will take two values in such a way so that if you change the value, it will be affected to the original one also. Then set the minimum value of them to the first one, and maximum value to the second one.
*/