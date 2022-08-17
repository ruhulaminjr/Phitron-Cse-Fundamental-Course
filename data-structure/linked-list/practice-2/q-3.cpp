

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
        cout << "Linked LIst is Empty : " << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *rotateNodes(Node *&head, int k)
{
    int i = 1;
    Node *temp = head;
    Node *temp2;
    while (temp->next != NULL)
    {
        if (i == k)
        {
            temp2 = temp;
        }
        temp = temp->next;
        i++;
    }
    Node *roateEl = temp2->next;
    //  connect tail to head
    temp->next = head;
    head = roateEl;
    temp2->next = NULL;
    return head;
}
int main(void)
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ch;
        cin >> ch;
        insertAtTail(head, ch);
    }
    Display(head);
    int k;
    cin >> k;
    head = rotateNodes(head, k);
    cout << "After Rotates : " << endl;
    Display(head);
}

/*
    Given a singly linked list, rotate the linked list counter-clockwise by k nodes. Where k is a given positive integer. For example, if the given linked list is 10->20->30->40->50->60 and k is 4, the list should be modified to 50->60->10->20->30->40. Assume that k is smaller than the count of nodes in a linked list.

Expected Time Complexity : O(N)

Sample
Input
Output
Explanation
1
8
1 2 2 4 5 6 7 8
4
5->6->7->8->1->2->2->4


4th position Node is 4. So, from last till the 5th Position the rotation will happen. At first 8, then 7, then 6 and lastly 5 will go at the front to form 5->6->7->8->1->2->2->4
2
5
1 2 3 4 5
3
 4->5->1->2->3
3rd position Node is 3. So, from last till the 4th Position the rotation will happen.  At first 5, and lastly, 4 will go at the front to form  4->5->1->2->3


*/