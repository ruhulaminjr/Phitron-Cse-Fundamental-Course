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
    cout << " 1.Insert at Head :  " << endl;
    cout << " 2.Insert at Tail : " << endl;
    cout << " 3.Insert at Specific Position:  " << endl;
    cout << " 4.Search Unique Value :  " << endl;
    cout << " 0. Exit : " << endl;
    int flag, pos;
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
        case 5:
            cout << "Enter key to Search Double Position : " << endl;
            cin >> val;
            searchAtMultipleValue(head, val);
            break;

        default:
            break;
        }
    }
    cout << "Linked list Node Value : " << endl;
    display(head);
    cout << "Linked list count: " << countNode(head) << endl;
}