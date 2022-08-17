#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    char value;
    Node *next;
    Node(char ch)
    {
        this->value = ch;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, char ch)
{
    Node *newNode = new Node(ch);
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
Node *reverseNode(Node *&head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverseNode(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
Node *findMid(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
bool checkPalindrome(Node *&head)
{
    Node *mid = findMid(head);
    Node *revHead;
    revHead = reverseNode(mid->next);
    Node *temp = head;
    int Flag = 0;
    while (temp != mid)
    {
        if (temp->value != revHead->value)
            Flag = 1;
        revHead = revHead->next;
        temp = temp->next;
    }
    if (Flag == 0)
        return true;
    else
        return false;
}
int main(void)
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        insertAtTail(head, ch);
    }
    // Display(head);
    // cout << "Reverse : " << endl;
    // Node *mid = findMid(head);
    // head = reverseNode(mid->next);
    Display(head);
    if (checkPalindrome(head))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

/*
1	Given a singly linked list of characters, write a function that returns true if the given list is a palindrome, else false.

Sample
Input
Output
Explanation
1
5
R A D A R
True


The list is a Palindrome as if we reverse RADAR we will get the same word.
2
8
FARANAAJ
False
Vice Versa to Sample 1.


*/