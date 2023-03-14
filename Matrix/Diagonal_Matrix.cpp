#include<bits/stdc++.h>
using namespace std;

// struct dia
// {
//     int a[10];
//     int n;
// };

// void Set(dia *arr, int i, int j, int k)
// {
//     // here k is the element which i want to insert
//     if(i == j)
//         arr->a[i - 1] = k;
// }

// int get(dia arr, int i, int j)
// {
//     if(i == j)
//         return arr.a[i - 1];
//     else
//         return 0;
// }

// void display(dia arr)
// {
//     for(int i = 1; i <= arr.n; i++)
//     {
//         for(int j = 1; j <= arr.n; j++)
//         {
//             if(i == j)
//                 cout << arr.a[i - 1] << " ";
//             else
//                 cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     dia arr;
//     arr.n = 4;

//     Set(&arr, 1, 1, 2); Set(&arr, 2, 2, 3); Set(&arr, 3, 3, 4); Set(&arr, 4,4, 5);

//     display(arr);
// }

// using class 

class diagonal
{
    private:
        int n;
        int *a;

    public:
        diagonal(int n)
        {
            this->n = n;
            a = new int[n];
        }

        void setData(int i, int j, int x);
        int getData(int i, int j);
        void display();

        // distructore
        ~diagonal()
        {
            delete []a;
        }
};

void diagonal::setData(int i, int j, int x)
{
    if(i == j)
    {
        a[i - 1] = x;
    }
}

int diagonal::getData(int i, int j)
{
    if(i == j)
        return a[i - 1];
    else
        return 0;
}

void diagonal::display()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                cout << a[i - 1] << " ";
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    diagonal arr(4);

    arr.setData(1, 1, 2);
    arr.setData(2, 2, 3);
    arr.setData(3, 3, 4);
    arr.setData(4, 4, 5);

    arr.display();
}