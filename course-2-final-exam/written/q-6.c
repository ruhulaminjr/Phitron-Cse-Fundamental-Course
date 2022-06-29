#include <stdio.h>
void change(int *arr, int n, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        arr[i] = 0;
    }
}
int main(void)
{
    int ar[] = {10, 20, 30, 40, 50}, N = 5, L = 1, R = 3;
    change(ar,N,L,R);
    for(int i=0;i<N;i++){
        printf("%d ",ar[i]);
    }
}
/*
Write a function named change_values() which will take an array of integers ar[], the size of the array N, and two more integer values L and R. You need to change all the values of the array between L-th index and R-th index to 0. Print the array in the  main() function. Here, (0 <= L,R < N  and 0 < N <=100000 and 0 <= ar[i] <= N)
For example:
ar[]={10,20,30,40,50}, N=5, L=1, R=3 then the array will become ar[]={10,0,0,0,50} after the operation.
*/