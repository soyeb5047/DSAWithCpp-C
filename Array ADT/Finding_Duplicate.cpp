#include<bits/stdc++.h>
using namespace std;

void duplicate(int *a, int n)
{
    // for(int i = 0; i < n; i++)
    // {
    //     int count = 1;
    //     if(a[i] != -1)
    //     {
    //         for(int j = i + 1; j < n; j++)
    //         {
    //             if(a[i] == a[j])
    //             {
    //                 count++;
    //                 a[j] = -1;

    //             }
    //         }
    //         if(count > 1)
    //         cout << "The element is : " << a[i] << " " <<  "count is : " << count << endl;
    //     }
    // }

    // using hash table
    int hash[100] = {0};
    for(int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }

    for(int i = 0; i < 100; i++)
    {
        if(hash[i] > 1)
            cout << "the element is : " << i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    duplicate(a, n);
}