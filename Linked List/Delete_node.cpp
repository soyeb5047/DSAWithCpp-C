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

void Delete(node *p, int pos)
{

    int x;
    if(pos == 0)
    {
        node *q = head;
        head = head->next;
        x = q->data;
        // q->next = NULL;
        delete q;
    }
    else
    {
        node *q = NULL;
        for(int i = 0; i < pos; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        
        p->next = NULL;x = p->data;
        delete p;
    }
    cout << "The deleted element is : " << x <<endl;
}

void display(node *p)
{
    // p = head;
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

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    int pos;
    cout << "Enter the position which you want to delete : ";
    cin >> pos;

    Delete(head, pos);
    display(head);
}