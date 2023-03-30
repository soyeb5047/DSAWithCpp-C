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

void deleteNode(node *p, int pos)
{
    if(pos == 1)
    {
        head = head->next;
        delete p;
        if(head)
            head->prev = NULL;
    }
    else
    {
        for(int i = 1; i != pos; i++)
            p = p->next;

        p->prev->next = p->next;
        if(p->next)
            p->next->prev = p->prev;

        delete p;
    }
}

void display(node *p)
{
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
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    int pos;
    cout << "Enter the position which you want to delete : ";
    cin >> pos;

    deleteNode(head, pos);
    display(head);
}