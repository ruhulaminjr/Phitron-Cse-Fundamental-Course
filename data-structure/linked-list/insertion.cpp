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
struct Test
{
    int counter[1000];
};
void display(Node *node)
{
    if (node == NULL)
    {
        cout << "No Element IN Linked List " << endl;
        return;
    }
    while (node != NULL)
    {
        // cout << "[";
        // cout << node->value << " | " << &node->nextVal;
        // cout << "] ->  ";
        cout << node->value << " -> ";
        node = node->nextVal;
    }
    cout << endl;
}
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
void insertAtSpecificPosition(Node *head, int pos, int val)
{
    int i = 0;
    Node *temp = head;
    while (i < pos - 2)
    {
        temp = temp->nextVal;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->nextVal = temp->nextVal;
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
int searchAtUniqueValue(Node *head, int key)
{
    int count = 1;
    if (head == NULL)
    {
        return -1;
    }
    Node *temp = head;
    while (temp->value != key)
    {
        if (temp->nextVal == NULL)
        {
            return -1;
        }
        count++;
        temp = temp->nextVal;
    }
    return count;
}
void searchAtMultipleValue(Node *head, int key)
{

    Node *temp = head;
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
        temp = temp->nextVal;
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
Test searchDuplicateValueReturn(Node *head, int key)
{
    Node *temp = head;
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
        temp = temp->nextVal;
        i++;
    }
    T.counter[0] = k;
    return T;
}
void insertAfterSpecificValueUnique(Node *&head, int search, int key)
{
    int pos = searchAtUniqueValue(head, search);
    insertAtSpecificPosition(head, pos + 1, key);
    cout << "Update Linked List : ";
    display(head);
}
void insertAfterSpecificValueDubplicate(Node *&head, int search, int key)
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
void deleteAtHead(Node *head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->nextVal;
        delete temp;
        cout << "Update Linked List : ";
        display(head);
    }
    else
    {
        cout << "There is No Element In Linked List " << endl;
    }
}
void deleteAtTail(Node *head)
{
    Node *temp = head;
    if (temp != NULL && temp->nextVal != NULL)
    {
        while (temp->nextVal->nextVal != NULL)
        {
            temp = temp->nextVal;
        }
        Node *delel = temp->nextVal;
        temp->nextVal = NULL;
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
void deletionAtSpecificPosition(Node *head, int pos)
{
    Node *temp = head;
    if (temp != NULL && pos <= countNode(head))
    {
        if (pos == 1)
        {
            deleteAtHead(head);
        }
        else
        {
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->nextVal;
                i++;
            }
            Node *delEl = temp->nextVal;
            temp->nextVal = delEl->nextVal;
            delete delEl;
            display(head);
        }
    }
    else
    {
        if (pos > countNode(head) || pos < 1)
        {
            cout << "Invalid Positon " << endl;
        }
    }
}
void deleteBySpecificValueUnique(Node *head, int val)
{
    int pos;
    pos = searchAtUniqueValue(head, val);
    if (pos != -1)
    {
        deletionAtSpecificPosition(head, pos);
    }
    else
    {
        cout << "Invalid Value " << endl;
    }
}
void deleteBySpecificValueDuplicate(Node *head, int val)
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
            pos = T.counter[i] + 2 - i;

            deletionAtSpecificPosition(head, pos);
        }
    }
}
Node *reverseNodeNonRecursive(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout << "No Element in the LINKed LIst " << endl;
        return head;
    }
    Node *Next = head->nextVal;

    while (1)
    {
        current->nextVal = prev;
        prev = current;
        current = Next;
        if (current == NULL)
            break;
        Next = Next->nextVal;
    }
    return prev;
    // 1 > 2 > 3 > 4 > 5 > NULL
    // 1 > NULL 2 > 1 3 > 2 > 4 > 3 > 5 > 4
    // return 5 ;
}

Node *reverseLinkedLIstRecursive(Node *head)
{
    if (head->nextVal == NULL)
    {
        return head;
    }
    Node *newHead = reverseNodeNonRecursive(head->nextVal);
    head->nextVal->nextVal = head;
    head->nextVal = NULL;
    return newHead;
}
int main(void)
{
    Node *head = NULL;
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
            head = reverseLinkedLIstRecursive(head);
        default:
            break;
        }
    }
    cout << "Linked list Node Value : " << endl;
    display(head);
    cout << "Linked list count: " << countNode(head) << endl;
}