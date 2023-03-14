#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*first = NULL;

void display(node *p)
{
    // node *p = first;

    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void insertLast( int x)
{
    // create a new node and assing the value to this node and next to NULL
    node *last;
    node *t = new node;
    t->data = x;
    t->next = NULL;

    if(first == NULL)
    {
        first = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}



int main()
{
    insertLast( 2);
    insertLast( 3);
    insertLast( 4);
    insertLast( 5);

    display(first);
    
}