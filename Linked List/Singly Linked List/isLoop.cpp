// if any linked list's last element has null then it is called linear linked list
// if the last element point again any element again then it is called loop linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*first = NULL;

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

    // create a loop
    last->next = first->next;
}

int isLoop(node *p)
{
    node *q = first;

    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;
        if(p == q)
            break;

    } while (p && q);

    return p == q ? 1 : 0;
    
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

    // create a loop
    // first->next->next->next->next = first;

    if(isLoop(first))
    {
        cout << "This is the Loop Linked List.\n";
    }
    else
    {
        cout << "This is the Linear Linked List.\n";
    }

}