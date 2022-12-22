#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void create(int a[] ,int n)
{
    struct Node *t,*last;
    
    head = new Node;
    head->data = a[0];
    head->next = NULL;
    last = head;
    
    for(int i = 1; i<n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        
    }
}

void display(struct Node *p)
{
    //struct Node *p = first;
    
    while(p != NULL)
    {
        cout<< p->data <<" ";
        p = p->next;
    }
    cout<<endl;
}

/*void display(struct Node *p)        // Using Recursion
{
    if(p != NULL)
    {
        cout << p->data <<" ";
        display(p->next);
    }
}*/

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n ;i++)
    {
        cin >> a[i];
    }

    create(a,n);

    display(head);
}