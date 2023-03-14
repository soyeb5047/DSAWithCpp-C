#include<bits/stdc++.h>
using namespace std;

struct arr
{
    int ar[20];
    int size;
    int length;
};

// void left_shift(arr *a)
// {
//     for(int i = 0; i < a->length; i++)
//     {
//         a->a[i] = a->a[i+1];
//     }
//     a->a[a->length - 1] = 0;
// }

// void right_shift(arr *a)
// {
//     for(int i = a->length - 1; i >= 0; i++)
//     {
//         a->a[i+1] = a->a[i];
       
//     }
//     a->a[0] = 0;
// }



void rev(arr *a)
{
    int start = 0, end = a->length;
    while(start < end)
    {
        swap(a->ar[start], a->ar[end]);
        start++,end--;
    }
}

void display(arr a)
{
    for(int i = 0; i < a.length; i++)
    {
        cout << a.ar[i] << " ";
    }
    cout << endl;
}

int main()
{
    arr a = {{3, 6, 7, 2, 9, 1}, 10, 6};

    rev(&a);
    cout << "The reverse array is : ";
    display(a);

    // right_shift(&a);
    // cout << "\nThe right shift array is : ";
    // display(a);

    // left_shift(&a);
    // cout << "\nThe left shift array is : ";
    // display(a);
}