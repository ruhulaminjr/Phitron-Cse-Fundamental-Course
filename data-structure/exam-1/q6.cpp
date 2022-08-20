#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    };
    temp->next = newNode;
}
void replaceEven(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value % 2 == 0)
        {
            temp->value = -1;
        }
        temp = temp->next;
    }
}
int main(void)
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int value;
        cin >> value;
        insertAtTail(head, value);
    }
    replaceEven(head);
    Display(head);
}
/*
write down a program that will take n number of input from the users and create a Linear Linked List of n size. Replace all the even numbers in the list with -1 and display the List.

Sample Input
Sample Output
5
1 3 4 5 6
1-> 3 -> -1 -> 5 -> -1
6
2 2 2 1 2 3
-1 -> -1->-1-> 1 -> -1 -> 3


*/