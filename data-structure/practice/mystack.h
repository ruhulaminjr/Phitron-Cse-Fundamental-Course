#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *prev;
    Node *next;
    Node(N value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
template <typename T>
class Stacks
{
    Node<T> *head;
    Node<T> *top;
    int count = 0;

public:
    // constructor function
    Stacks()
    {
        this->head = NULL;
        this->top = NULL;
    }
    // push
    void push(T value)
    {
        Node<T> *newNode = new Node<T>(value);
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
    T pop()
    {
        T value;
        if (head == NULL)
        {
            cout << "Stack is Now Empty : " << endl;
            return value;
        }
        if (head == top)
        {
            value = head->value;
            head = top = NULL;
            count--;
            return value;
        }
        Node<T> *delNode = top;
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
    T topValue()
    {
        if (top == NULL)
        {
            return 0;
        }
        return top->value;
    }
};
