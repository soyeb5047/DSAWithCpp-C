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

    // craete this list as circular linked list
    last->next = head;
}

void insert(node *p, int pos, int ele)
{
    node *t;

    if(pos == 0)
    {
        // craete a node
        t = new node;
        t->data = ele;
        t->next = head;
        
        // we traverse the p till p->next is head
        while(p->next != head)
        {
            p = p->next;
        }
        // after that p->next point on this new node and head point on this new node
        p->next = t;

        // if the position is the last then we can avoid this step
        head = t;
    }
    else
    {
        for(int i = 1; i < pos; i++)
        {
            p = p->next;
        }
        t = new node;
        t->data = ele;
        t->next = p->next;
        p->next = t;
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

    int ele;
    cout << "Enter the element which you want to insert : ";
    cin >> ele;

    int pos;
    cout << "Enter the position which you want you want to insert : ";
    cin >> pos;

    insert(head, pos, ele);

    display(head);
}