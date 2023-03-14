#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *last, *t;
    t = new node;
    t->data = a[0];
    t->next = NULL;
    head = t;
    last = t;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void insert(node *p, int k)
{
    if(head->data > k)
    {
        node *n = new node;
        n->data = k;
        n->next = head;
        head = n;
    }
    else
    {
        node *q = NULL;

        while(p->data < k)
        {
            q = p;
            p = p->next;
        }

        node *t = new node;
        t->data = k;
        t->next = p;
        q->next = t;
    }
}

void display(node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];

    for(int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);
    // display(head);

    int key;
    cout << "Enter the key which you want to insert in the list : ";
    cin >> key;

    insert(head, key);
    display(head);
}