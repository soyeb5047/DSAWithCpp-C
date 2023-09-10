#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if(front == NULL && rear == NULL)
    {
        // no node present
        front = rear = temp;

    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

int dequeue()
{
    int x = -1;

    // empty condition
    if(front == rear)
    {
        cout << "Queue is Empty\n";
    }
    else{
        Node *temp = front;
        x = front->data;
        front = front->next;
        delete temp;
    }
    return x;
}

int peek()
{
    if(front == NULL && rear == NULL)
    {
        return -1;
    }
    else{
        return front->data;
    }
}

void display()
{
    Node *temp = front;

    cout << "Queue elements are : ";
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    enqueue(2);
    enqueue(10);
    enqueue(-3);
    enqueue(2);

    display();

    cout << "deleted element is : " << dequeue() << endl;

    display();

    cout << "Peek Element is : " << peek() << endl;
}