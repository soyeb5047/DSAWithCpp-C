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

/*Node* search(struct Node *p,int key)      
{
    while(p != NULL)
    {
        if(p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}*/

Node* search(struct Node *p, int key)       //Uisng Recusion
{
    if(!p)
    {
        return NULL;
    }
    if(key == p->data)
    {
        return p;
    }
    return search(p->next,key);
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
    
    cout << search(first,key) << "\n";
    
}
