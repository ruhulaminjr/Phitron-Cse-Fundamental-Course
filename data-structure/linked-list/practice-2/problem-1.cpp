#include <bits/stdc++.h>

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
//  Search a value (Duplication enabled List)  //
int *searchValueAtDuplicateList(Node *head, int value)
{
    int count = countNode(head);
    if (count == -1)
    {
        cout << "No Element In The LInked List " << endl;
        return NULL;
    }
    int *arr = new int[count];
    int k = 1;
    int i = 1;
    int flag = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
        {
            arr[k] = i;
            flag = 1;
            k++;
        }
        temp = temp->Next;
        i++;
    }
    if (flag == 0)
    {
        cout << "No Element Matched IN Node List" << endl;
        return NULL;
    }
    else
    {
        arr[0] = k;
        return arr;
    }
}
//  Insertion after a specific value (Unique List)  //
void insertAfterSpecficValueUnique(Node *head, int value, int key)
{
    int pos = searchValueAtUniqueList(head, value);
    if (pos == -1)
    {
        cout << "No Value found in linked list " << endl;
        return;
    }
    insertAtSpecificPosition(head, pos + 1, key);
}
//  Insertion after a specific value (Duplication enabled List) //
void insertAfterSpecificValueDuplicate(Node *head, int value, int key)
{
    int *pos = searchValueAtDuplicateList(head, value);
    for (int i = 1; i < pos[0]; i++)
    {
        int position = pos[i] + i;
        insertAtSpecificPosition(head, position, key);
    }
}
//  Deletion at Head //
Node *deletionAtHead(Node *head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->Next;
        delete temp;
        return head;
    }
    else
    {
        cout << "No Element found ";
        return NULL;
    }
}
//  Deletion at Tail //
Node *deletionAtTail(Node *head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        cout << head->value << endl;
        Node *delEl = temp->Next->Next;
        temp->Next = NULL;
        delete delEl;
        return head;
    }
    else
    {
        return deletionAtHead(temp);
    }
}
//  Deletion at a Specific Position  //
Node *deletionAtSpecificPosition(Node *head, int pos)
{
    Node *temp = head;
    int i = 1;
    if (pos == 1)
    {
        return deletionAtHead(head);
    }
    if (pos > countNode(head))
    {
        cout << "Position OUt of Range" << endl;
        return NULL;
    }
    if (pos == countNode(head))
    {
        return deletionAtTail(head);
    }
    while (i < pos - 1)
    {
        temp = temp->Next;
        i++;
    }
    Node *delEl = temp->Next;
    temp->Next = delEl->Next;
    delete delEl;
    return head;
}

//  Deletion by Value (Unique List) //
Node *deletionByValueUnique(Node *head, int value)
{
    int pos = searchValueAtUniqueList(head, value);
    if (pos == -1)
    {
        cout << "Value Position Not found" << endl;
        return head;
    }
    else
    {
        return deletionAtSpecificPosition(head, pos);
    }
}
//  Deletion by Value(Duplication enabled List)  //
Node* DeletionbyValueDuplicate(Node *head, int value)
{
    int *arr = searchValueAtDuplicateList(head, value);
    for (int i = 1; i < arr[0]; i++)
    {
        int pos = arr[i] + 1 - i;
        head = deletionAtSpecificPosition(head, pos);
    }
    return head;
}
int main(void)
{
    Node *head = NULL;
    insertAtHead(head, 55);
    insertAtHead(head, 12);
    insertAtTail(head, 11);
    insertAtTail(head, 19);
    insertAtTail(head, 11);
    insertAtSpecificPosition(head, 3, 99);
    insertAfterSpecficValueUnique(head, 19, 999);
    insertAfterSpecificValueDuplicate(head, 11, 121);
    head = deletionAtHead(head);
    head = deletionAtTail(head);
    head = deletionAtSpecificPosition(head, 2);
    head = deletionByValueUnique(head, 999);
    // cout << searchValueAtUniqueList(head, 99) << endl;
    head = DeletionbyValueDuplicate(head,11);
    int *dupPos = searchValueAtDuplicateList(head, 11);
    if (dupPos != NULL)
    {
        for (int i = 1; i < dupPos[0]; i++)
        {
            cout << dupPos[i] << " ";
        }
        cout << endl;
    }
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

//  Search a value (Duplication enabled List)  //
step 1 : iterate all node elemnt and count i
step 2 : every time value match with node value i store in a array k position
step 3 : return the array;
//  Insertion after a specific value (Unique List)  //
step 1 : find the positon of the value
step 2 : then call insertatspecific position pass position and value;
//  Insertion after a specific value (Duplication enabled List) //
step 1 : find the all the position of the value
step 2 : then insert Node after each positon but every change positon + i;
//  Deletion at Head //
step 1 : set head next el to head
step 2 : delete head;
//  Deletion at Tail //
step 1 : find the Node that point to tail node
step 2 : after that change the node next to NULL
step 3 : delete the tail;
//  Deletion at a Specific Position  //
step 1 : set a counter variable
step 2 : run while loop until counter variable < position and set temp node to temp->next node
step 3 : then set temp->next equal to temp->next->next
step 4 : then delete temp->next;
//  Deletion by Value (Unique List) //
step 1 : find the position of the value
step 2 : call insert at position function;
//  Deletion by Value(Duplication enabled List)  //
step 1 : find all the duplicate value position
step 2 : and call insertAtposition for every duplicate element and increase position by 1;
*/
