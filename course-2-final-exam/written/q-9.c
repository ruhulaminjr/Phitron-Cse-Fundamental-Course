#include <stdio.h>
struct Student
{
    int roll;
    int class;
    int marks;
};
void input(struct Student *st)
{
    scanf("%d %d %d", &st->roll, &st->class, &st->marks);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Student arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        input(&arr[i]);
        sum += arr[i].marks;
    }
    printf("%d\n", sum);
}