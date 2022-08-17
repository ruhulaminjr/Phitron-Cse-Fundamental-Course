#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
class Stacks
{
    Node *head;
    Node *top;
    int count = 0;

public:
    // constructor function
    Stacks()
    {
        this->head = NULL;
        this->top = NULL;
    }
    // push
    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    // pop
    int pop()
    {
        int value;
        if (head == NULL)
        {
            cout << "Stack is Now Empty : " << endl;
            return -1;
        }
        if (head == top)
        {
            value = head->value;
            head = top = NULL;
            count--;
            return value;
        }
        Node *delNode = top;
        top = delNode->prev;
        top->next = NULL;
        count--;
        value = delNode->value;
        delete delNode;
        return value;
    }
    // check empty
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    // size
    int size()
    {
        return count;
    }
    //  top
    int topValue()
    {
        if (top == NULL)
        {
            return 0;
        }
        return top->value;
    }
};
