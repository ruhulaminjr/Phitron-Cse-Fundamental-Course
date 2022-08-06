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
    char check = 'y';
    while (check == 'y')
    {
        cout << "Enter Number to Add " << endl;
        cin >> n;
        insertAtTail(head, n);
        cout << "Do You Want to Continue Add(y/n) " << endl;
        cin >> check;
    }

    display(head);
}