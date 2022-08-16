#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->next = NULL;
        this->value = value;
    }
};
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head; // temp->next
    temp->next = newNode;
}
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->value;
        temp = temp->next;
        if (temp != head)
            cout << " -> ";
    } while (temp != head);
    cout << endl;
}
Node *deletionAtHead(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
        return NULL;
    }
    if (head->next == head)
    {
        head = NULL;
        return NULL;
    }
    Node *temp = head;
    Node *delEl = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = delEl->next;
    head = delEl->next;
    delete delEl;
    cout << "Update Linked List : " << endl;
    Display(head);
    return head;
}
void DeletionAtTail(Node *&head)
{

    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
        return;
    }
    Node *temp = head;
    if (temp->next != head)
    {
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        Node *DelEl = temp->next;
        temp->next = DelEl->next;
        delete DelEl;
        cout << "Update Linked List : " << endl;
        Display(head);
    }
    else
    {
        deletionAtHead(head);
    }
}
int main(void)
{
    Node *head = NULL;
    cout << " 1.Insert at Head : " << endl;
    cout << " 2.Insert at Tail : " << endl;
    cout << " 3.Deletion at Head : " << endl;
    cout << " 4.Deletion at Tail : " << endl;
    int flag = 33, pos;
    int check;
    while (flag != 0)
    {
        cout << "Enter Choice : ";
        cin >> flag;
        int val;
        switch (flag)
        {
        case 1:
            cout << "Enter Value In Head : ";
            cin >> val;
            insertAtHead(head, val);
            break;
        case 2:
            cout << "Enter Value In Tail : ";
            cin >> val;
            insertAtTail(head, val);
            break;
        case 3:
            head = deletionAtHead(head);
            break;
        case 4:
            DeletionAtTail(head);
            break;
        default:
            break;
        }
    }
    cout << "Linked LIst Value Is : " << endl;
    Display(head);
}