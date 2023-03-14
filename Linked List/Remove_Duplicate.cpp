#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *t, *last;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void removeDuplicate()
{
    node *q = head;
    node *p = q->next;

    while(p != NULL)
    {
        if(q->data != p->data)
        {
            q = p;
            p = p->next;
        }
        else
        {
            q->next = p->next;
            delete p;
            p = q->next;
        }
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
    cout << "Enter the elements of array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    removeDuplicate();

    display(head);
}