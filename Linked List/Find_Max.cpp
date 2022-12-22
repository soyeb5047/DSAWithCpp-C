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

/*int max(struct Node *p)
{
   
    int max = INT_MIN;
    
    while(p != NULL)
    {
        if(max < p->data)
        {
            max = p->data;
        }
        p = p->next;
    }
    
    
    return max;
}*/

int max(struct Node *p)     //using Recursion
{
    int x = 0;
    
    if(!p)
    {
        return INT_MIN;
    }
    /*else{
        x = max(p->next);
        
        if(x > p->data)
        {
            return x;
        }
        else{
            return p->data;
        }
    }*/
    
    x = max(p->next);
    return x > p->data ? x:p->data;
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
    
    cout << max(first) << "\n";
    
}
