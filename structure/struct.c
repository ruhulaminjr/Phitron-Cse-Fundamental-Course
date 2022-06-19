#include <stdio.h>
#include <string.h>
struct Student
{
    char name[100];
    int roll;
    int marks;
    int lastMarks[5];
};
int main(void)
{
    struct Student a = {"Ruhul", 39, 75};
    printf("Name : %s Roll- %d Marks- %d \n", a.name, a.roll, a.marks);
    struct Student b;
    int str[100];
    scanf("%s", b.name);
    // strcpy(a.name, str);
    scanf("%d %d", &b.roll, &b.marks);
    printf("Name : %s Roll- %d Marks- %d \n", b.name, b.roll, b.marks);
    printf("Enter last 5 Marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a.lastMarks[i]);
    }
    printf("Last 5 Marks is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a.lastMarks[i]);
    }
    printf("\n");
}