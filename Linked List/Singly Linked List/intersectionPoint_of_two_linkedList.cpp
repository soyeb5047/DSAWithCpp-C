#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*first = NULL, *sec = NULL;

void create1st(int *a, int n)
{
    node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2nd(int *a, int n, node *p)
{
    node *t, *last;
    sec = new node;
    sec->data = a[0];
    sec->next = NULL;
    last = sec;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    last->next = p;
}

void insertionPoint(node *p, node *q)
{
    // make here stack of node* type which contains address of nodes
    stack<node*> st1;
    while(p != NULL)
    {
        st1.push(p);
        p = p->next;
    }

    stack<node*> st2;
    while(q != NULL)
    {
        st2.push(q);
        q = q->next;
    }

    // if there two address are different it means previous node data is insertion point
    node *t;
    while(st1.top() == st2.top())
    {
        t = st1.top();
        st1.pop();
        st2.pop();
    }

    cout << "Insertion point is : " << t->data << endl;
}

int main()
{
    int n;
    cout << "Enter the First array size : ";
    cin >> n;

    int a[n];
    cout << "Enter the array Element : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create1st(a, n);

    // for creating insertion point we take a pointer which is shift to first list's any position
    int i;
    cout << "Enter the position : ";
    cin >> i;
    node *t = first;
    while(i > 0)
    {
        t = t->next;
        i--;
    }
    cout << "For Confirmation the Intersection point is : " << t->data << endl;

    int m;
    cout << "Enter the size of second array : ";
    cin >> m;

    int b[m];
    cout << "Enter the array Element : ";
    for(int i = 0; i < m; i++)
        cin >> b[i];

    create2nd(b, m, t);

    insertionPoint(first, sec);
}