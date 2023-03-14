#include<bits/stdc++.h>
using namespace std;

struct A
{
    int a[10];
    int size;
    int length;
};

void append(A *arr, int k)
{
    if(arr->size > arr->length)
        arr->a[arr->length++] = k;

    // arr->a[arr->length] = k;
    
}

void insert(A *arr, int pos, int k)
{
    if(pos <= arr->length)
    {
        for(int i = arr->length; i > pos; i--)
            arr->a[i] = arr->a[i - 1];

        arr->a[pos] = k;
        arr->length++;
    }
    
}

void display(A arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

int main()
{
    struct A arr = {{1, 2,3,4,5}, 10, 5};

    int k;
    cout <<  "Enter the element for insert or append : ";
    cin >> k;

    int pos;
    cout << "Enter the pos : ";
    cin >> pos;

    insert(&arr, pos, k);

    // append(&arr, k);

    display(arr);
}