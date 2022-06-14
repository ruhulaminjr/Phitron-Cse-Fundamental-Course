#include <stdio.h>
void reverse_array(int arr[],int n){
   int i=0;
   int j = n-1;

   while(i < j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
    // p[1,2,3,4,5]
    // 5,2,3 ,4,1
    // 5,4,3,2,1
   }
}
int main(void){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    reverse_array(arr,n);
    printf("[");
    for(int i=0;i<n;i++){
        int x = i < n-1;
        printf(x ? "%d,":"%d",arr[i]);
    }
     printf("]\n");

}
/*
Write a function named reverse_array() which will take an array, size of that array and reverse that array. You don’t need to return anything because if you reverse that array, the changes will be applied to the original array also.
*/