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

// it takes more time complexity
// int length(node *p)
// {
//     int count = 0;
//     while(p != NULL)
//     {
//         count++;
//         p = p->next;
//     }
//     return count;
// }

// int find_Middle(node *p)
// {
//     int n = length(head);
    
//     int mid = ceil(n / 2.0);
//     // return mid;
    
//     for(int i = 1; i < mid; i++)
//     {
//         p = p->next;
//     }
//     return p->data;
// }

int find_Middle(node *p)
{
    // here we solve this using finding length but
    // we find this element in one iteration

    // we take an extra pointer for shift this pointer 2 places when p shifts 1 place
    node *q = head;

    while(q != NULL)
    {
        q = q->next;

        if(q != NULL)
            q = q->next;

        // now we shift p pointer
        if(q != NULL)
            p = p->next;
    }
    return p->data;

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
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    cout << "The middle element is : " << find_Middle(head) << endl;

    // display(head);
    
}