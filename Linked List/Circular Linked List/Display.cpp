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

    // craete this list as circular linked list
    last->next = head;
}

// void display(node *p)
// {
//     // we using do while loop because we have to print first node
//     do
//     {
//        cout << p->data << " ";
//        p = p->next;
//     } while (p != head);
    
// }

// display using recursion
void display(node *p)
{
    // we need the flag because we have to print the head node at the first
    // we take static because after the function call itself then flag = 0 , if we go again at the head flag = 0 and this calling again and again that's why we take this static 
    static int flag = 0;

    if(p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        display(p->next);
    }
    // flag = 0;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);
    display(head);
}