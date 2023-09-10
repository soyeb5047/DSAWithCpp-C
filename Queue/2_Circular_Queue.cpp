#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int front, rear, size;
    int *a;
};

void enQueue(Queue *q, int x)
{
    if((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full\n";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        // cout <<"position of rear is : " << q->rear << endl;
        q->a[q->rear] = x;
    }
}

int deQueue(Queue *q)
{
    int x = -1;
    if(q->rear == q->front)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        // cout << "Position of front is : " << q->front << endl;
        x = q->a[q->front];
    }
    return x;
}

int main()
{
    Queue q;

    cout << "Enter the size of the Queue : ";
    cin >> q.size;

    q.a = new int[q.size];

    q.front = q.rear = 0;

    enQueue(&q, 2);
    enQueue(&q, 6);
    enQueue(&q, 1);
    enQueue(&q, 9);

    cout << "Deleted Element is : " << deQueue(&q) << endl;
    cout << "Deleted Element is : " << deQueue(&q) << endl;

    enQueue(&q, 3);
    enQueue(&q, 10);





}