#include <bits/stdc++.h>
using namespace std;
template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node(N value)
    {
        this->value = value;
        this->next = NULL;
    }
};
template <typename T>
class Queue
{
public:
    Node<T> *front;
    Node<T> *rear;
    int count = 0;
    Queue()
    {
        this->front = NULL;
        this->rear = NULL;
    }
    // Enqueue ---> Push Operation
    void push(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            count++;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
        count++;
    }
    // Dequeue ---> Pop Operation
    T pop()
    {
        T chk;
        if (rear == NULL)
        {
            cout << "Queue Underflow Detected " << endl;
            return chk;
        }

        Node<T> *delEl = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        chk = delEl->value;
        delete delEl;
        count--;
        return chk;
    }
    // Peek ---> Front() and Back Operation
    T Front()
    {
        T chk;
        if (rear == NULL)
        {
            cout << "Queue Underflow Detected " << endl;
            return chk;
        }

        return front->value;
    }
    T Back()
    {
        T chk;
        if (rear == NULL)
        {
            cout << "Queue Underflow Detected " << endl;
            return chk;
        }
        return rear->value;
    }
    // Check Empty Operation
    bool isEmpty()
    {
        if (rear == NULL && front == NULL)
        {
            return true;
        }

        else
            return false;
    }
    // return the size of the q
    int size()
    {
        return count;
    }
};