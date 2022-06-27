#include <stdio.h>
#include <string.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void)
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int arr[len];
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '+')
        {
            int value = str[i] - '0';
            arr[j] = value;
            j++;
        }
    }
    sort(arr, j);
    for (int i = 0; i < j; i++)
    {
        printf(i==j-1 ? "%d":"%d+", arr[i]);
    }

    printf("\n");
}
/*
Elmoogy and Attar are friends. Elmoogy challenges Attar to give him a sum of multiple numbers and these numbers range are from 1 to 3. He wants him to print this summands in increasing order. Help attar to solve this problem!

For example, if Elmoogy give Attar this equation 1+3+2 , the result would be 1+2+3.
INPUT
3+2+1
OUTPUT
1+2+3
*/