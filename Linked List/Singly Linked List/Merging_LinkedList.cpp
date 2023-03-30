#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*first = NULL, *second = NULL;

void create2(int *a, int n)
{
    node *t, *last2;
    t = new node;
    t->data = a[0];
    t->next = NULL;
    second = t;
    last2 = t;

    for(int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last2->next = t;
        last2 = t;
    }
}

void create(int *a, int n)
{
    node *t, *last;
    t = new node;
    t->data = a[0];
    t->next = NULL;
    first = t;
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

void merge(node *p, node *q)
{
    node *head, *last;

    // we point head and last which is small value
    // after that head is fixed and q changes it position

    if(p->data < q->data)
    {
        head = last = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        head = last = second;
        q = q->next;
        last->next = NULL;
    }

    while(p != NULL && q != NULL)
    {
        if(p->data > q->data)
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }

        else
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
    }

    // if p doesn't reach to NULL
    while(p != NULL)
    {
        last->next = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }

    // if q doesn't reach to NULL
    while(q != NULL)
    {
        last->next = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }

    // now first takes the head's address and head make as NULL
    first = head;
    head = NULL;
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
    cout << "Enter the first array size : ";
    cin >> n;

    int a[n];

    cout << "Enter the first array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);
    // display(first);

    int m;
    cout << "Enter the another size : ";
    cin >> m;

    int arr[m];
    cout << "Enter the second array elements : ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    create2(arr, m);
    // display(second);

    merge(first, second);
    display(first);

}