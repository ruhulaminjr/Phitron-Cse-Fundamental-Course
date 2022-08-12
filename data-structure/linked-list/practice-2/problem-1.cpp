#include <iostream>

using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        this->value = val;
        this->Next = NULL;
    }
};
// Display List //
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List Is Empty " << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->Next;
    }
    cout << endl;
}
//  Counting the Size  //
int countNode(Node *head)
{
    int i = 0;
    Node *temp = head;
    if (head == NULL)
    {
        return -1;
    }
    while (temp != NULL)
    {
        temp = temp->Next;
        i++;
    }
    return i;
}
// Insertion at Head //
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->Next = head;
    head = newNode;
}
//  Insertion at Tail //
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// Insertion at Specific Position //
void insertAtSpecificPosition(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        cout << "Linked List is Empty " << endl;
        return;
    }
    int i = 1;
    Node *temp = head;
    while (i < pos - 1)
    {
        temp = temp->Next;
        i++;
    }
    // cout<<temp->value<<endl;
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
//  Search a value (Unique List)  //
int searchValueAtUniqueList(Node *head, int value)
{
    if (head == NULL)
    {
        cout << "Linked list is Empty " << endl;
    }
    int i = 1;
    int flag = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
        {
            flag = 1;

            break;
        }
        temp = temp->Next;
        i++;
    }
    if (flag == 0)
    {
        cout << "No Value Found " << endl;
        return -1;
    }
    else
    {
        return i;
    }
}
int main(void)
{
    Node *head = NULL;
    insertAtHead(head, 55);
    insertAtHead(head, 11);
    insertAtTail(head, 19);
    insertAtSpecificPosition(head, 3, 99);
    cout << searchValueAtUniqueList(head, 99) << endl;
    Display(head);
}

/*Module 18.5 Practice Day 1

Implement the following Operations for Linear Linked List using the template code taught in Modules 17 and 18.

//  Counting the Size  //

step 1 : set a count variable
step 2 : run a loop until node value gets Null
step 3 : every loop itereation increse count variable by one ;

// Display List //
step 1 : run a loop until node next element equal to NULL;
step 2 : every iteration print the value of Node ;

// Insertion at Head //

step 1 : store head into a temp variable
step 2 : create a new node using the value
step 3 : check if head equal to NULL then store new into head or
step 4 : then store new node next into head
step 5 : and chagne head equal to new node;

//  Insertion at Tail //

step 1 : finding the tail
step 2 : set tail next to new node;

// Insertion at Specific Position //

step 1 : find the position Node
step 2 : set new node next into positon node next
step 3 : set position node next into new node;

//  Search a value (Unique List)  //

step 1 : set a counter variable and iterator node and count incress by one
step 2 : if node value matched with user value then return the counter variable ;

Search a value (Duplication enabled List)
Insertion after a specific value (Unique List)
Insertion after a specific value (Duplication enabled List)
Deletion at Head
Deletion at Tail
Deletion at a Specific Position
Deletion by Value (Unique List)
Deletion by Value(Duplication enabled List)
*/
