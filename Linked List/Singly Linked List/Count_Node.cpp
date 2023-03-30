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

/*int count(struct Node *p)
{
    //struct Node *p = first;
    int count = 0;
    
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    
    
    return count;
}*/

int count(struct Node *p)   //Using recursion
{
    if(p == NULL)
    {
        return 0;
    }
    return count(p->next) + 1;
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
    
    create(a,5);
    
    cout << count(first) << "\n";
    
}
