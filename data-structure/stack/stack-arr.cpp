#include <iostream>
using namespace std;
void push(int *stacks, int value, int size)
{
    static int point = -1;
    if (point < size - 1)
    {
        point++;
        stacks[point] = value;
    }
    else
    {
        cout << "Stack Overflow Detected" << endl;
    }
}
int pop(int *stacks)
{
    static int point = 5 - 1;
    if (point >= 0)
    {
        int val = stacks[point];
        point--;
        return val;
    }
    else
    {
        cout << "Stacks UnderFlow Detected " << endl;
        return -1;
    }
}
int main(void)
{
    int stacks[5];
    push(stacks, 999, 5);
    push(stacks, 999, 5);
    push(stacks, 999, 5);
    push(stacks, 999, 5);
    push(stacks, 999, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << stacks[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 7; i++)
    {
        int val = pop(stacks);
        cout << "val : " << val << " ";
    }
    cout << endl;
}