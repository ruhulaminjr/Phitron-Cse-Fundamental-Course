#include <iostream>

using namespace std;
class Node
{
public:
    int value;
    Node *nextVal;
    Node(int val)
    {
        this->value = val;
        this->nextVal = NULL;
    }
};
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->nextVal = head;
    head = newNode;
}
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->nextVal != NULL)
    {
        temp = temp->nextVal;
    }
    temp->nextVal = newNode;
}
int countNode(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->nextVal;
    }
    return count;
}
void display(Node *node)
{
    while (node != NULL)
    {
        cout << node->value << " -> ";
        node = node->nextVal;
    }
    cout << endl;
}
int main(void)
{
    Node *head = NULL;
    cout << "Insert Linked List : " << endl;
    while (1)
    {
        int flag;
        cout << "press 1 Insert at Head | Press 2 Insert at Tail : " << endl;
        cin >> flag;
        if (flag == 1)
        {
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insertAtHead(head, val);
        }
        else if (flag == 2)
        {
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insertAtTail(head, val);
        }
        else
        {
            break;
        }
    }
    cout << "Linked list Node Value : " << endl;
    display(head);
    cout << "Linked list count: " << countNode(head) << endl;
}