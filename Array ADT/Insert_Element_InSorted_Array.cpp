#include<bits/stdc++.h>
using namespace std;

struct arr
{
    int ar[10];
    int size;
    int length;
};

void display(arr a)
{
    for(int i = 0; i < a.length; i++)
    {
        cout << a.ar[i] << " ";
    }
}

int isSorted(arr a)     // the array is sorted or not
{
    for(int i = 0; i < a.length; i++)
    {
        if(a.ar[i] > a.ar[i + 1])
            return 0;
    }
    return 1;
}

void insert_ele(arr *a, int k)
{
    int i = a->length - 1;

    while(a->ar[i] > k)
    {
        a->ar[i+1] = a->ar[i];

        i--;

    }
    // cout << i << endl;
    a->ar[i + 1]=k;
    a->length++;
}

int main()
{
    arr a = {{1, 2, 3, 7, 9}, 10, 5};

    int key;
    cout << "Enter an element which you want to insert in Sorted Array : ";
    cin >> key;

    insert_ele(&a, key);
    cout << "Length is Now after enter the element : " << a.length << endl;
    display(a);


}