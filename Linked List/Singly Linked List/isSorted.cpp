#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *p, *last;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < n; i++)
    {
        p = new node;
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

int isSorted()
{
    node *p = head;

    int x = INT_MIN;
    while(p != NULL)
    {
        // compare the p->data with x
        if(x > p->data)
        {
            // if this condition is true it means list is not sorted
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    // getting out from this loop means this list is sorted
    return 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    create(a, n);

    if(isSorted())
    {
        cout << "This list is sorted.\n";
    }
    else
        cout << "This list is not sorted.\n";
}