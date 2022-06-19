#include <stdio.h>
struct Batsman
{
    char name[100];
    int score;
};
void print_result(struct Batsman a)
{
    printf("Name : %s Score : %d\n", a.name, a.score);
}
int main(void)
{
    struct Batsman arr[3];
    for (int i = 0; i < 3; i++)
    {

        scanf("%s %d", arr[i].name, &arr[i].score);
    }
    printf("\n");
    for (int i = 2; i >= 0; i--)
    {
        print_result(arr[i]);
    }
}