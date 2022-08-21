#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
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
    };
    temp->next = newNode;
}
void traverseMnNodes(Node *&head, int m, int n)
{
    Node *temp = head;
    Node *temp2;
    int check = true;
    while (check)
    {
        for (int i = 0; i < m; i++)
        {
            if (temp == head)
            {
                i++;
            }
            temp = temp->next;
            if (temp->next == NULL)
            {
                check = false;
                break;
            }
        }
        // cout << temp->value << endl;
        temp2 = temp;

        for (int i = 0; i < n; i++)
        {
            temp = temp->next;
            if (temp->next == NULL)
            {
                check = false;
                break;
            }
        }
        temp2->next = temp->next;
        // cout<<temp->value<<endl;
        if (temp->next == NULL)
        {
            check = false;
            break;
        }
    }
}
int main(void)
{
    Node *head = NULL;
    int x, m, n;
    cin >> x;
    cin >> m >> n;
    while (x--)
    {
        int value;
        cin >> value;
        insertAtTail(head, value);
    }
    traverseMnNodes(head, m, n);
    Display(head);
}