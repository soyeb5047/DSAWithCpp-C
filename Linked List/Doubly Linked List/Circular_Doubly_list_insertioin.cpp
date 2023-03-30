#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *t, *last;
    t = new node;
    t->data = a[0];
    t->prev = NULL;
    t->next = NULL;
    head = t;
    last = t;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }

    // makeing doubly linked list as doubly circular doubly linked list
    head->prev = last;
    last->next = head;
}

void insert(node *p, int pos, int ele)
{
    node *t;
    t = new node;
    t->data = ele;
    if(pos == 0)
    {
        t->prev = head->prev;
        t->next = head;
        head->prev->next = t;
        head->prev = t;
        head = t;
    }
    else
    {
        for(int i = 0; i <  pos - 1; i++)
            p = p->next;
        
        t->prev = p;
        t->next = p->next;
        p->next->prev = t;
        p->next = t;
    }
}

void display(node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    }while(p != head);
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    int pos;
    cout << "Enter the position : ";
    cin >> pos;

    int ele;
    cout << "Enter the value which you want to insert : ";
    cin >> ele;

    insert(head, pos, ele);

    display(head);
}