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
struct Test
{
    int counter[1000];
};
void display(DoublyNode *head)
{
    if (head == NULL)
    {
        cout << "No Element In Doubly Linked List " << endl;
        return;
    }
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        // cout<<"INside While Lopp"<<endl;
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    // cout<<"OUtsite while LOOOP" << endl;
}
void insertAtHead(DoublyNode *&head, int value)
{
    // step 1 create a new Node
    DoublyNode *newNode = new DoublyNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // step 2 change head previous to new Node
    head->prev = newNode;
    // step 3 change new head next to head
    newNode->next = head;
    // step 4 replace head into new node
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
    // step 1 traverse linked list to last element
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // step 2 connect last element to new node
    newNode->prev = temp;
    temp->next = newNode;
}
void insertAtSpecificPosition(DoublyNode *head, int pos, int val)
{
    int i = 0;
    DoublyNode *temp = head;
    // traverse linked list to position
    while (i < pos - 2)
    {
        temp = temp->next;
        i++;
    }
    DoublyNode *newNode = new DoublyNode(val);
    // insert linked list into position
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
}
int countNode(DoublyNode *&head)
{
    int count = 0;
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int searchAtUniqueValue(DoublyNode *head, int key)
{
    int count = 1;
    if (head == NULL)
    {
        return -1;
    }
    DoublyNode *temp = head;
    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        count++;
        temp = temp->next;
    }
    return count;
}
void searchAtMultipleValue(DoublyNode *head, int key)
{

    DoublyNode *temp = head;
    int size = countNode(head);
    int counter[size + 1];
    int k = 1;
    int flag = 0;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            counter[k] = i;
            k++;
            flag = 1;
        }
        temp = temp->next;
        i++;
    }
    if (flag == 0)
    {
        cout << "Your Searching Value Not Inserted Yet" << endl;
    }
    else
    {
        counter[0] = k;
        cout << "Your Element Found At : ";
        for (int i = 1; i < counter[0]; i++)
        {
            cout << counter[i];
            if (i < counter[0] - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
}
Test searchDuplicateValueReturn(DoublyNode *head, int key)
{
    DoublyNode *temp = head;
    Test T;
    int i = 0;
    int k = 1;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.counter[k] = i;
            k++;
        }
        temp = temp->next;
        i++;
    }
    T.counter[0] = k;
    return T;
}
void insertAfterSpecificValueUnique(DoublyNode *&head, int search, int key)
{
    int pos = searchAtUniqueValue(head, search);
    insertAtSpecificPosition(head, pos + 1, key);
    cout << "Update Linked List : ";
    display(head);
}
void insertAfterSpecificValueDubplicate(DoublyNode *&head, int search, int key)
{
    Test T;
    T = searchDuplicateValueReturn(head, search);
    if (T.counter[0] == 1)
    {
        cout << "Value Not found" << endl;
        return;
    }
    for (int i = 1; i < T.counter[0]; i++)
    {
        int pos = T.counter[i] + i;
        insertAtSpecificPosition(head, pos + 1, key);
    }
    cout << "Update Linked List : ";
    display(head);
}
void deleteAtHead(DoublyNode *head)
{
    DoublyNode *temp = head;
    if (temp != NULL)
    {
        head = temp->next;
        head->prev = NULL;
        delete temp;
        cout << "Update Linked List : ";
        display(head);
    }
    else
    {
        cout << "There is No Element In Linked List " << endl;
    }
}
void deleteAtTail(DoublyNode *head)
{
    DoublyNode *temp = head;
    if (temp != NULL && temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        DoublyNode *delel = temp->next;
        temp->next = NULL;
        delete delel;
        display(head);
    }
    else
    {
        if (temp == NULL)
        {
            cout << "There is No Element In Linked List " << endl;
        }
        else
        {
            head = NULL;
            display(head);
        }
    }
}
void deletionAtSpecificPosition(DoublyNode *head, int pos)
{
    DoublyNode *temp = head;
    if (temp != NULL && pos < countNode(head))
    {
        if (pos == 0)
        {
            deleteAtHead(head);
        }
        else
        {
            int i = 0;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            // cout << "Temp Value : " << temp->value << endl;
            DoublyNode *delEl = temp->next;
            temp->next = delEl->next;
            delEl->next->prev = temp;
            delete delEl;
            display(head);
        }
    }
    else
    {
        if (pos > countNode(head) || pos < 0)
        {
            cout << "Invalid Positon " << endl;
        }
    }
}
void deleteBySpecificValueUnique(DoublyNode *head, int val)
{
    int pos;
    pos = searchAtUniqueValue(head, val);
    if (pos != -1)
    {
        cout << pos << "  Inside delete specific position " << endl;
        deletionAtSpecificPosition(head, pos);
    }
    else
    {
        cout << "Invalid Value " << endl;
    }
}
void deleteBySpecificValueDuplicate(DoublyNode *head, int val)
{
    // getting duplicate value positon;
    Test T;
    T = searchDuplicateValueReturn(head, val);
    int size = T.counter[0];
    if (size == 1)
    {
        cout << "No Element Found " << endl;
    }
    else
    {
        for (int i = 1; i < size; i++)
        {

            int pos;
            pos = T.counter[i] + 1 - i;
            deletionAtSpecificPosition(head, pos);
        }
    }
}
DoublyNode *reverseNodeNonRecursive(DoublyNode *head)
{
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        DoublyNode *temp2 = temp;
        temp->next = temp2->prev;
        temp->prev = temp2->next;
        temp = temp2->next;
    }
    return temp;
}

// Node *reverseLinkedLIstRecursive(DoublyNode *head)
// {
//     if (head->next == NULL)
//     {
//         return head;
//     }
//     Node *newHead = reverseNodeNonRecursive(head->nextVal);
//     head->nextVal->nextVal = head;
//     head->nextVal = NULL;
//     return newHead;
// }
int main(void)
{
    DoublyNode *head = NULL;
    cout << "Insert Linked List : " << endl;
    cout << " 1.Insert at Head :  " << endl;
    cout << " 2.Insert at Tail : " << endl;
    cout << " 3.Insert at Specific Position:  " << endl;
    cout << " 4.Search Unique Value :  " << endl;
    cout << " 5.Search Duplicate Value  :  " << endl;
    cout << " 6.Insert After Specific Value Unique :  " << endl;
    cout << " 7.Insert After Specific Value Duplicate :  " << endl;
    cout << " 8.Delete Head Node : " << endl;
    cout << " 9.Delete Tail Node : " << endl;
    cout << " 10.Delete At Specific Position : " << endl;
    cout << " 11.Delete by Specific Value Unique List : " << endl;
    cout << " 12.Delete by Specific Value Duplicate List : " << endl;
    cout << " 13.Reverse Linked List Non Recursive : " << endl;
    cout << " 14.Reverse Linked List Recursive : " << endl;
    cout << " 0. Exit : " << endl;
    int flag = 33, pos, src;
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

            cout << "Enter Value : ";
            cin >> val;
            cout << "Enter Position : ";
            cin >> pos;
            insertAtSpecificPosition(head, pos, val);
            break;
        case 4:
            cout << "Enter Key to Search : ";
            cin >> val;
            pos = searchAtUniqueValue(head, val);
            if (pos != -1)
            {
                cout << "Value Found in At Position : " << pos << endl;
            }
            else
            {
                cout << "Value Not Inserted Yet" << endl;
            }
            break;
        case 5:
            cout << "Enter key to Search Double Position : " << endl;
            cin >> val;
            // searchAtMultipleValue(head, val);
            Test T;
            T = searchDuplicateValueReturn(head, val);

            if (T.counter[0] == 1)
            {
                cout << "Your Value Not Inserted Yet " << endl;
            }
            else
            {
                int size = T.counter[0];
                cout << "Your Search Value Fount At : ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.counter[i];
                    if (i < size - 1)
                    {
                        cout << " , ";
                    }
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Enter Search Value : ";
            cin >> src;
            cout << "Enter Value To Insert : ";
            cin >> val;
            insertAfterSpecificValueUnique(head, src, val);
            break;
        case 7:
            cout << "Enter Search Value : ";
            cin >> src;
            cout << "Enter Value To Insert : ";
            cin >> val;
            insertAfterSpecificValueDubplicate(head, src, val);
            break;
        case 8:
            deleteAtHead(head);
            break;
        case 9:
            deleteAtTail(head);
            break;
        case 10:
            cout << "Enter Position To Delete : ";
            cin >> pos;
            deletionAtSpecificPosition(head, pos);
            break;
        case 11:
            cout << "Enter Value To Delete Unique List : ";
            cin >> val;
            deleteBySpecificValueUnique(head, val);
            break;
        case 12:
            cout << "Enter Value To Delete Duplicate List " << endl;
            cin >> val;
            deleteBySpecificValueDuplicate(head, val);
            break;
        case 13:
            head = reverseNodeNonRecursive(head);
            break;
        case 14:
            // head = reverseLinkedLIstRecursive(head);
            break;
        default:
            break;
        }
    }
    cout << "Linked list Node Value : " << endl;
    display(head);
    cout << "Linked list count: " << countNode(head) << endl;
}
/*
Q1	Implement the following Operations for a Doubly Linked List using the template code taught in Modules 17, 18, and 19.

Counting the Size
Display List
Insertion at Head
Insertion at Tail
Insertion at Specific Position
Search a value (Unique List)
Search a value (Duplication enabled List)
Insertion after a specific value (Unique List)
Insertion after a specific value (Duplication enabled List)
Deletion at Head
Deletion at Tail
Deletion at a Specific Position
Deletion by Value (Unique List)
Deletion by Value(Duplication enabled List)
*/