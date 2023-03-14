#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


// // array making in heap
// struct str
// {
//     /* data */
//     int *a;
//     int size;
//     int length;
// };

// void display(struct str arr)
// {
//     for(int i= 0; i < arr.length; i++)
//     {
//         cout << arr.a[i] << " ";
//     }
// }


// int main()
// {
//     struct  str arr;
//     // int *a;
//     cout << "Enter the size : ";
//     cin >> arr.size;

//     arr.a = (int*)malloc(arr.size * sizeof(int));   // create the array dynamically
    
//     arr.length = 0;

//     int n;
//     cout << "Enter the size for array length : ";
//     cin >> n;

//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr.a[i];
//     }

//     arr.length = n;     // set the length  n

//     display(arr);
// }

struct str
{
    int a[10];
    int size;
    int length;

};

void display(str a)
{
    for(int i = 0; i < a.length; i++)
    {
        cout << a.a[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct str a = {{1,2,3,4,5}, 20, 5};

    cout << a.size << " " << a.length << endl;

    cout << "the size of the structure is : " << sizeof(a) << endl;

    display(a);
    
}