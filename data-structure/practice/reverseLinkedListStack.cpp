#include <bits/stdc++.h>
#include "mystack.h"
using namespace std;
class NodeLink
{
public:
    int value;
    NodeLink *next;
    NodeLink(int val)
    {
        value = val;
        next = NULL;
    }
};
void insertAtTail(NodeLink *&head, int value)
{
    NodeLink *newNodeLink = new NodeLink(value);
    if (head == NULL)
    {
        head = newNodeLink;
        return;
    }
    NodeLink *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNodeLink;
}
void Display(NodeLink *head)
{
    NodeLink *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;
}
void reverseNodeStack(NodeLink *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Stacks<int> st;
    while (head != NULL)
    {
        st.push(head->value);
        head = head->next;
    }
    while (!st.isEmpty())
    {
        insertAtTail(head, st.pop());
    }
}
int main(void)
{
    NodeLink *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtTail(head, value);
    }
    reverseNodeStack(head);
    Display(head);
}