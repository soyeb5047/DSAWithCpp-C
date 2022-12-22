#include <iostream>
#include<climits>
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

int min(struct Node *p)
{
   
    int m = INT_MAX;
    
    while(p != NULL)
    {
        if(m > p->data)
        {
            m = p->data;
        }
        p = p->next;
    }
    
    
    return m;
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
    
    create(a,n);
    
    cout << min(first) << "\n";
    
}
