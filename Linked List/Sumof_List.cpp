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

/*int sum(struct Node *p)
{
   
    int sum = 0;
    
    while(p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    
    
    return sum;
}*/

int sum(struct Node *p)     //using Recursion
{
    if(!p)
    {
        return 0;
    }
    
    return p->data + sum(p->next);
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
    
    cout << sum(first) << "\n";
    
}
