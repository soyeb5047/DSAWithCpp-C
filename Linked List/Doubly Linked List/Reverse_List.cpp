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
}

void reverseList(node *p)
{
    node *temp;
    while(p != NULL)
    {
        temp->next = p->next;
        p->next = p->prev;
        p->prev = temp->next;
        p = p->prev;
        // delete temp;
        if(p != NULL && p->next == NULL)
            head = p;

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
    
    create(a,n);

    reverseList(head);

    display(head);
}