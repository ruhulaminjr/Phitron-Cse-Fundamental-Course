#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->next = NULL;
        this->value = value;
    }
};
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List Is Empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int findMidPoint(Node *&head)
{
    if (head == NULL)
    {
        return -1;
    }
    Node *fast = head;
    Node *slow = head;
    if (head != NULL && head->next != NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow->value;
}
void makeCycle(Node *head, int pos)
{
    if (head == NULL)
    {
        cout << "Linked LIst is Empty" << endl;
        return;
    }
    Node *temp = head;
    Node *CycleHead;
    int count = 0;
    while (temp->next != NULL)
    {
        if (pos == count)
            CycleHead = temp;
        temp = temp->next;
        count++;
    }
    temp->next = CycleHead;
}
bool checkCycle(Node *&head)
{
    Node *fast = head;
    Node *slow = head;
    if (head == NULL)
    {
        cout << "No Element in LInked List " << endl;
        return false;
    }
    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;
        slow = slow->next;
        if (fast->next == slow->next)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
int main(void)
{
    Node *head = NULL;
    cout << " 1.Insert at Tail : " << endl;
    cout << " 2.Find The Mid Point (slow/fast) : " << endl;
    cout << " 3.Make Cycle In Linked List : " << endl;
    cout << " 4.Check Cycle Linked List : " << endl;
    cout << " 5.Remove Cycle Linked List : " << endl;
    int flag = 33, pos;
    int check;
    while (flag != 0)
    {
        cout << "Enter Choice : ";
        cin >> flag;
        int val;
        switch (flag)
        {
        case 1:
            cout << "Enter Value In Tail : ";
            cin >> val;
            insertAtTail(head, val);
            break;
        case 2:
            int mid;
            mid = findMidPoint(head);
            if (mid == -1)
                cout << "Linked list is empty" << endl;
            else
                cout << "Mid Point Value : " << mid << endl;
            break;
        case 3:
            int pos;
            cout << "Enter Position To Make Cycle : ";
            cin >> pos;
            makeCycle(head, pos);
            break;
        case 4:
            check = checkCycle(head);
            if (check)
            {
                cout << "Linked List is Cycle" << endl;
            }
            else
            {
                cout << "Linked List is No Cycle List" << endl;
            }
        case 5:
            check = checkCycle(head);
            if (check)
            {
                removeCycle(head);
                cout << "Cycle Removed Successfully" << endl;
            }
            else
            {
                cout << "Linked List is No Cycle List" << endl;
            }
            break;
        default:
            break;
        }
    }
    cout << "Linked LIst Value Is : " << endl;
    Display(head);
}