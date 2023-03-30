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
}

// int countNode()
// {
//     node *p = head;
//     int count = 0;

//     while(p != NULL)
//     {
//         count++;
//         p = p->next;
//     }
//     return count;
// }

// // reverse list by using array (taking auxilary space)
// void reverseList()
// {
//     node *p = head;
//     int i = 0;
//     int n = countNode();
//     int a[n];

//     while(p != NULL)
//     {
//         a[i++] = p->data;
//         p = p->next;
//     }

//     // pointer again point on the head and i-- because we just interchhange the value not the address
//     p = head, i--;
//     while(p != NULL)
//     {
//         p->data = a[i--];
//         p = p->next;
//     }

// }

void reverseList(node *p)
{
    node *q = NULL, *r = NULL;

    while(p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    // after getting out from this loop the linked list is reversed but we take one extra operation
    // head points on q pointer or node
    head = q;
}

void recursionReverse(node *q, node *p)
{
    if(p != NULL)
    {
        // in function calling q points on p and p goes on p->next
        recursionReverse(p, p->next);
        p->next = q;
    }
    else{
        head = q;
    }
}

void display(node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of array : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);
    // display(head);


    // reverse using array 
    // reverseList();

    // reverse using pointer sliding approach
    // reverseList(head);

    // reverseList using recursion
    recursionReverse(NULL, head);

    display(head);
}