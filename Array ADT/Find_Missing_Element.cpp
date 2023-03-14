#include<bits/stdc++.h>
using namespace std;

void unorder(int *a, int n)
{
    int min = a[0], max = a[0];

    for(int i = 0; i < n; i++)
    {
        if(max <= a[i] || min >= a[i])
        {
            if(max <= a[i])
                max = a[i];
            else
                min = a[i];
        }
    }

    // cout << max << " " << min << endl;

    int hash[max + 1] = {0};

    for(int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }

    for(int i = min; i <= max; i++)
    {
        if(hash[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void missingMultiple(int *a, int n)
{
    int diff = a[0] - 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] - i != diff)
        {
            while(a[i] - i > diff)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
    cout << endl;
}

// int missing(int *a, int n)
// {
    
//     // if the array is 1 to n natural number
//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }

//     int total = (a[n - 1] * (a[n - 1] + 1)) / 2;

//     return total - sum;
    
// }

// for single element
void missing(int *a, int n)
{
    int start = a[0];
    int end = a[n - 1];
    int diff = a[0] - 0;

    for(int i = 0; i < n; i++)
    {
        if((a[i] - i) != diff)
        {
            cout << diff + i;
            break;
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // cout << missing(a, n);

    // missing(a, n);

    // missingMultiple(a, n);

    // for unsorted array we are using hash-tabel or bit set
    unorder(a, n);
}