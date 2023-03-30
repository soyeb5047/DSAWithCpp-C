#include<bits/stdc++.h>
using namespace std;

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
    t->prev = NULL;
    t->data = a[0];
    t->next = NULL;
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

void insertEle(node *p, int k, int pos)
{
    node *t;
    t->data = k;

    if(pos == 0)
    {
        t->prev = NULL;
        t->next = head;
        head->prev = t;
        head = t;
    }
    else
    {
        for(int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->prev = p;
        t->next = p->next;
        if(p->next)
            p->next->prev = t;
        p->next = t;
    }
}

void display(node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter elements of array : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    int ele;
    cout << "Enter the element which you want to insert : ";
    cin >> ele;

    int pos;
    cout << "Enter the position : ";
    cin >> pos;

    insertEle(head, ele, pos);

    display(head);
}