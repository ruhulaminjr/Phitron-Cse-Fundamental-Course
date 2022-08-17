
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void Display(Node *head)
{

    if (head == NULL)
    {
        cout << "Linked LIst is Empty : " << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *removeDuplicates(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->value == temp->next->value)
        {
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main(void)
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ch;
        cin >> ch;
        insertAtTail(head, ch);
    }
    Display(head);
    head = removeDuplicates(head);
    cout << "Without Duplicates " << endl;
    Display(head);
}
/*
Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exist). Note that, The nodes are arranged in a sorted way.

Expected Time Complexity : O(N)

Sample
Input
Output
Explanation
1
4
2 2 4 5
2 -> 4 -> 5


In the given linked list  2 ->2 -> 4-> 5, only 2 occurs more than 1 time.
2
5
2 2 2 2 2
2
In the given linked list 2 ->2 ->2 ->2 ->2, 2 is the only element and is repeated 5 times.


*/