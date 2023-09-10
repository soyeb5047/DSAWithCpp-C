/*
1. enqueue -> push operation
2. dequeue -> pop operation

*/

#include<iostream>
using namespace std;

struct Queue
{
    int size;
    int *a;
    int front, rear;
};

void enQueue(Queue *q, int x)
{
    // check queue is full or not
    if(q->rear == q->size - 1)
        cout << "Queue Overflow\n";
    
    else{
        q->rear++;
        q->a[q->rear] = x;
    }
}

int deQueue(Queue *q)
{
    int ele = -1;

    // check queue empty or not
    if(q->front == q->rear)
    {
        cout << "Queue Underflow\n";
        // q->front = q->rear = -1;
    }
    
    else
    {
        q->front++;
        ele = q->a[q->front];
        if(q->front == q->rear)
        {
            q->front = q->rear = -1;
        }
    }

    return ele;
}

bool isEmpty(Queue *q)
{
    if(q->front == q->rear)
        return true;
    else
        return false;
}

bool isFull(Queue *q)
{
    if(q->rear == q->size - 1)
        return true;
    else
        return false;
}

int main()
{
    // make an object of Queue
    Queue q;

    // take size of the array
    cout << "Enter the size of the Queue : ";
    cin >> q.size;

    // make queue of fixed size
    q.a = new int[q.size];

    // intialize the front and rear to -1
    q.front = q.rear = -1;

    enQueue(&q, 2);
    enQueue(&q, 4);
    enQueue(&q, 8);
    enQueue(&q, 4);

    if(isFull(&q))
        cout << "Queue is full\n";
    else
        cout << "Queue is not full\n";

    cout << "Front element is : " <<deQueue(&q) << endl;
    cout << "Front element is : " <<deQueue(&q) << endl;
    cout << "Front element is : " <<deQueue(&q) << endl;
    cout << "Front element is : " <<deQueue(&q) << endl;
    // cout << "Front element is : " <<deQueue(&q) << endl;

    if(isEmpty(&q))
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    
    if(isFull(&q))
        cout << "Queue is full\n";
    else
        cout << "Queue is not full\n";
}