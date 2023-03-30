#include<bits/stdc++.h>
using namespace std;

// doubly linked list has two pointer 1. previous and 2. next pointer
struct node
{
    node *prev;
    int data;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *t, *last;
    t = new node;
    t->data = a[0];
    t->next = NULL;
    t->prev = NULL;
    head = t;
    last = t;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->prev = last;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;

    }
}

void display(node *p)
{
    cout << "Doubly Linked List Elemernts are : ";  
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    display(head);
}