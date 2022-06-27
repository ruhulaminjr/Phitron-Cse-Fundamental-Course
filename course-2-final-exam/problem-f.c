#include <stdio.h>
int main(void)
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int x = 1;
    while (n--)
    {
        if(x * 2 < x +k){
            x = x*2;
        }else{
            x = x+k;
        }
        
    }
    printf("%d\n", x);
}

/*


Square1001 has seen an electric bulletin board displaying the integer 11. He can perform the following operations A and B to change this value:

Operation A: The displayed value is doubled.
Operation B: The displayed value increases by KK.
Square1001 needs to perform these operations NN times in total. Find the minimum possible value displayed in the board after NN operations.
4
3
>> 10
The value will be minimized when the operations are performed in the following order: A, A, B, B.
In this case, the value will change as follows: 11 → 22 → 44 → 77 → 1010.
*/