#include <iostream>

using namespace std;
class DoublyNode
{
public:
    int value;
    DoublyNode *prev;
    DoublyNode *next;
    DoublyNode(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAthead(DoublyNode *&head, int value)
{
    DoublyNode *newNode = new DoublyNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertAtTail(DoublyNode *&head, int value)
{
    DoublyNode *newNode = new DoublyNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    DoublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}
int countLength(DoublyNode *head)
{
    int i = 0;
    DoublyNode *temp = head;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}
void Display(DoublyNode *head)
{
    if (head == NULL)
    {
        cout << "No Element In Doubly Linked List" << endl;
        return;
    }
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
void displayReverse(DoublyNode *head)
{
    DoublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->prev != NULL)
        {
            cout << " -> ";
        }
        temp = temp->prev;
    }
    cout << endl;
}
int main(void)
{
    DoublyNode *head = NULL;
    insertAthead(head, 55);
    insertAthead(head, 44);
    insertAtTail(head, 33);
    insertAtTail(head, 22);
    cout << countLength(head) << endl;
    Display(head);

    cout << "Reverse Doubly Linked List : ";
    displayReverse(head);
}