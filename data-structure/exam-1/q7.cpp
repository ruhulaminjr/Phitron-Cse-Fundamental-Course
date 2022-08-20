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
Node *reverseNodes(Node *&head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *newNode = reverseNodes(head->next);
    head->next->next = head;
    head->next = NULL;
    return newNode;
}
Node *reverseKNodes(Node *&head, int k)
{
    int i = 1;
    Node *temp = head;
    while (i < k)
    {
        i++;
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    // cout << "temp 2 value : " << temp2->value << endl;
    temp->next = NULL;
    Node *revNode = reverseNodes(head);
    Node *revNode2 = reverseNodes(temp2);
    Node *temp3 = revNode;
    while (temp3->next != NULL)
    {
        temp3 = temp3->next;
    }
    temp3->next = revNode2;
    return revNode;
}
int main(void)
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int value;
        cin >> value;
        insertAtTail(head, value);
    }
    int k;
    cin >> k;
    head = reverseKNodes(head, k);
    Display(head);
}
/*
Given a singly linked list of size N. The task is to reverse every k node (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Sample 2 for clarification). Your task is to complete the function reverseKNodes() which should reverse the linked list in a group of size k and return the head of the modified linked list.

Sample
Input
Output
Explanation
1
8
1 2 2 4 5 6 7 8
4
4->2->2->1->8 ->7->6->5


The first 4 elements 1,2,2,4 are reversed first and then the next 4 elements 5,6,7,8. Hence, the resultant linked list is 4->2->2->1->8->7->6->5.
2
5
1 2 3 4 5
3
3->2->1->5->4
The first 3 elements are 1,2,3 are reversed first and then elements 4,5 are reversed. Hence, the resultant linked list is 3->2->1->5->4.


*/