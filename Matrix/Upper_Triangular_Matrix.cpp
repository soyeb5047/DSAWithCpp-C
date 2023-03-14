#include<bits/stdc++.h>
using namespace std;

struct mat
{
    int size;
    int *a;
};

// if we use column major mapping so the formula of identify the index is arr.a[(j * (j - 1)) / 2 + (i - 1)];

// by using row major mapping
void setData(mat *arr, int i, int j, int x)
{
    if(i <= j)
        arr->a[((arr->size * (i - 1)) - (((i - 1) * (i - 2)) / 2)) + (j - i)] = x;
    
}

int getData(mat arr, int i, int j)
{
    if(i <= j)
        return arr.a[((arr.size * (i - 1)) - (((i - 1) * (i - 2)) / 2)) + (j - i)];
    else
        return 0;
}

void display(mat arr)
{
    for(int i = 1; i <= arr.size; i++)
    {
        for(int j = 1; j <= arr.size; j++)
        {
            if(i <= j)
                cout << arr.a[((arr.size * (i - 1)) - (((i - 1) * (i - 2)) / 2)) + (j - i)] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct mat arr;
    cout << "Enter the diamension : ";
    cin >> arr.size;

    arr.a = new int[arr.size * (arr.size + 1) / 2];

    int x;

    cout << "Enter the Elements : \n";
    for(int i = 1; i <= arr.size; i++)
    {
        for(int j = 1; j <= arr.size; j++)
        {
            cin >> x;
            setData(&arr, i, j, x);
        }
    }

    cout << endl << endl;

    display(arr);
}