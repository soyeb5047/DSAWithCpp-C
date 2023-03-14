#include<bits/stdc++.h>
using namespace std;

struct arr
{
    /* data */
    int a[10];
    int size;
    int length;
};

void delEle(arr *a, int pos)
{
    for(int i = pos + 1; i < a->length; i++)
    {
        a->a[i - 1] = a->a[i];
    }
    a->length--;
}

void display(arr a)
{
    for(int i = 0; i < a.length; i++)
    {
        cout << a.a[i] << " ";
    }
}


int main()
{
    struct arr a = {{1, 2, 3, 4, 5}, 10, 5};

    int pos;
    cin >> pos;

    delEle(&a,pos);

    display(a);
}