#include <stdio.h>
struct Student
{
    char name[100];
    char section[100];
    int class;
    int roll;
    int marks;
};
void printStudent(struct Student s)
{
    printf("Name : %s Section : %s Class: %d Roll: %d Marks: %d\n", s.name, s.section, s.class, s.roll, s.marks);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    struct Student arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter: Name--Section--class--roll--marks\n");
        scanf("%s %s %d %d %d", arr[i].name, arr[i].section, &arr[i].class, &arr[i].roll, &arr[i].marks);
    }
    struct Student highest = arr[0];
    struct Student lowest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks > highest.marks)
        {
            highest = arr[i];
        }
        if (arr[i].marks < lowest.marks)
        {
            lowest = arr[i];
        }
    }
    printf("Highest Score : ");
    printStudent(highest);
    printf("Lowest Score : ");
    printStudent(lowest);
}

/*
Make an array of struct Student given below and tell which student got the highest marks and which student got the lowest marks?
*/