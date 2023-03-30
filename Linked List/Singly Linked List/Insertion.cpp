#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int a[] ,int n)
{
    struct Node *t,*last;
    
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    
    for(int i = 1; i<n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        
    }
}

void insert(Node *p, int val, int pos)
{
    Node *newNode;
    
    
    if(pos == 0)
    {
        newNode = new Node;
        newNode->data = val;
        newNode->next = first;
        first = newNode;
    }
    else if(pos > 0)
    {
        for(int i=0; i<pos-1 && p!=NULL; i++)     // P pointer goes to pos - 1
        {
            p = p->next;
        }
        newNode = new Node;         // we make  a new node
        newNode->data = val;
        newNode->next = p->next;
        p->next = newNode;
        
    }
}

void display(Node *p)
{
    while(p)
    {
        cout<< p->data <<" ";
        p = p->next;
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int pos;
    cin>>pos;
    
    int val;
    cin>>val;
    
    
    create(a,n);
    insert(first,val,pos);
    display(first);
    
    
}
