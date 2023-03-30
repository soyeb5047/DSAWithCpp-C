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

    // create this list as circular linked list
    last->next = head;
}

void Delete(node *p, int pos)
{
    node *q;

    if(pos == 1)
    {
        while(p->next != head)
        {
            p = p->next;
        }
        if(p == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
        
    }
    else
    {
        for(int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delete q;
    }
}

void display(node *p)
{
    // we using do while loop because we have to print first node
    do
    {
       cout << p->data << " ";
       p = p->next;
    } while (p != head);
    
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    int pos;
    cout << "Enter the position which you want you want to insert : ";
    cin >> pos;

    Delete(head, pos);

    display(head);
}