#include <iostream>
using namespace std;
int main(void)
{
    int n, count;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> count;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            for (int j = i - 1; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            i = 0;
            count--;
            n = n - 1;
        }
        if (count <= 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// 3
//  5 6 7 6 8
//  5 6 6 8 8
/*

3 Given an array arr[] and a number k.The task is to delete k elements which are smaller than next element(i.e., we delete arr[i] if arr[i] < arr[i + 1]) or become smaller than next because next element is deleted.

                                                                                                                                                                 Expected Time Complexity : O(n ^ 2)

                                                                                                                                                                                                Sample
                                                                                                                                                                                            Input
                                                                                                                                                                                            Output
                                                                                                                                                                                            Explanation
                                                                                                                                                                                            1 3 3 100 1 1 100 1 arr[0] < arr[1] means 3 is less than 100,
    so delete 3. K is 1, thus 1 element deletion is completed.2 5 20 10 25 30 40 2 25 30 40 First we delete 10 because it follows arr[i] < arr[i + 1].Then we delete 20 because 25 is moved next to it and it also starts following the condition.K is 2, thus 2 element deletion is completed.

                                                                                                                                                                                                                                                                  * /

                                                                                                                                                                                                                                                                  */