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
void reverseNode(Node *&head, int i)
{
    if (i == 0)
    {
        return;
    }
    reverseNode(head->next, i = i - 1);
    cout << head->value<<"---";
}
int main(void)
{
    Node *head = NULL;
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertAtTail(head, value);
    }
    int revPos[q];
    for (int i = 0; i < q; i++)
    {
        cin >> revPos[i];
    }
    reverseNode(head, 3);
    cout << endl;
    reverseNode(head, 2);
    cout<<endl;
    Display(head);

    return 0;
}
/*

Q5 	Write down a program that will take n number of input from the users and create a Linear Linked List of n size. Now, write a Recursive function that will reverse till the kth position of a Linear Linked List. (k as user input).

Input:
First line contains n and q
Second line contains n space-separated integers denoting the elements of the Linear Linked List
The next q line contains a single integer denoting the position k till which the List needs to reversed
Output:
q number of lines containing the reverse lists.


Sample Input
Sample Output
5 2
1 3 4 5 6
3
2
4->3->1
3->1
6 1
1 2 3 4 5 6
4
4->3->2->1



*/