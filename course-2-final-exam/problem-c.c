#include <stdio.h>
void insert(int arr[], int n, int j)
{
    for (int i = n - 1; i > j; i--)
    {
        arr[i] = arr[i - 1];
    }
}
int main(void)
{
    FILE *input = fopen("input.txt","r");
    int t;
    fscanf(input,"%d", &t);
    while (t--)
    {
        int n;
        fscanf(input,"%d", &n);
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            fscanf(input,"%d", &arr[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            int last = arr[n - 1];
            insert(arr, n, i);
            arr[i] = last;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
//[3,4,5,2,9,1,1].
//[3,1,4,5,2,9,1]
//[3,1,4,1,5,2,9]
//[3,1,4,1,5,9,2]
//[3,1,4,1,5,9,2].
// Masud has a favorite series a[1 \dots n] a[1…n] consisting of nn integers.He wrote it out on the whiteboard as follows :

//     he wrote the number a_1a 1
// ​ to the left
//     side(at the beginning of the whiteboard);
// he wrote the number a_2a 2
// ​ to the right side(at the end of the whiteboard);
// then as far to the left as possible(but to the right from a_1a 1
// ​ ), he wrote the number a_3a
//     3
// ​ ;
// then as far to the right as possible(but to the left from a_2a 2
// ​ ), he wrote the number a_4a
//     4
// ​ ;
// Masud continued to act as well, until he wrote out the entire series on the whiteboard.The beginning of the result looks like this(of course, if n \ge 4n≥4).For example, if n = 7n = 7 and a = [ 3, 1, 4, 1, 5, 9, 2 ] a = [ 3, 1, 4, 1, 5, 9, 2 ], then Masud will write a series on the whiteboard[3, 4, 5, 2, 9, 1, 1][3, 4, 5, 2, 9, 1, 1].

//                                                                                                                                                                                                                                                          You saw the series written on the whiteboard and now you want to restore Masud's favorite series. * /
