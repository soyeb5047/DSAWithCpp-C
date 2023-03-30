/*   Search Using Move to First   */
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

Node *move(Node *p, int key)
{
    Node *q = NULL;
    
    while(p)
    {
        if(p->data == key)
        {
            q->next = p->next;
            p->next = first;    // p->next points to first Node
            first = p;      // First Node points to the new Node
            
            return p;
        }
        
        q = p;      // Q points to p
        p = p->next;
    }
    return NULL;
    
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
    
    
    int key;
    cin>>key;
    
    
    create(a,n);
    move(first,key) ;
    display(first);
    
    
}
