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

void concatination(node *p, node *q)
{
    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = q;
    q = NULL;
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

    concatination(first, second);
    display(first);

}