#include <iostream>

using namespace std;
class Node
{
public:
    int value;
    Node *nextval;
    Node(int val)
    {
        this->value = val;
        this->nextval = NULL;
    }
};
void insertAthead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->nextval = head;
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
    while (temp != NULL)
    {
        temp = temp->nextval;
    }
    temp->nextval = newNode;
}
void printNode(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << " > ";
        n = n->nextval;
    }
    cout << endl;
}
void reversedListPrint(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    reversedListPrint(n->nextval);
    cout << n->value << " -> " ;
}
int main(void)
{
    Node *head = NULL;
    insertAtTail(head, 343);
    insertAthead(head, 34222);
    printNode(head);
    reversedListPrint(head);
    cout<<endl;
}
/*
Write down the code to insert an element at the head and Tail of the Linked List. Do you think it is possible to print a linear linked list in a reverse way (Make a function named reversedListPrint() if possible)?[10+10]
*/