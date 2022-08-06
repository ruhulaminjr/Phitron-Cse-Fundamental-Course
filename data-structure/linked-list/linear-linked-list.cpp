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
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertAtHead(Node *&head, int val)
{
    // step 1 : creating a new node
    Node *newNode = new Node(val);
    // step 2 : point newnode next to head
    newNode->next = head;
    // step 3 : update head to newnode
    head = newNode;
}
void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
            cout << " -> ";
        n = n->next;
    }
    cout << endl;
}
int main(void)
{
    Node *head = NULL;
    int n;

    while (true)
    {
        int check;
        cout << "Press 1 to insert at head or press 2 to insert at tail And any number to exit" << endl;
        cin >> check;
        if (check == 1)
        {
            cout << "Enter Number to Add " << endl;
            cin >> n;
            insertAtHead(head, n);
        }
        else if (check == 2)
        {
            cout << "Enter Number to Add " << endl;
            cin >> n;
            insertAtTail(head, n);
        }
        else
        {
            break;
        }
    }

    display(head);
}