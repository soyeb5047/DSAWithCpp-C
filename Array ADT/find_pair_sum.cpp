#include<bits/stdc++.h>
using namespace std;

void find_pair(int *a, int n, int k)
{
    // for(int i = 0; i < n - 1; i++)
    // {
    //     for(int j = i + 1; j < n; j++)
    //     {
    //         if(a[i] + a[j] == k)
    //         {
    //             cout << "The numbers are : " << a[i] << " " << a[j] << endl;
    //         }
    //     }
    // }

    // using hash table
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }

    int hash[max + 1] = {0};

    for(int i = 0; i < n; i++)
    {
        hash[a[i]] = 1;
    }

    for(int i = 0; i <= max; i++)
    {
        int temp = k;
        if(hash[i] == 1)
        {
            int x = temp - i;
            hash[i] = 0;
            if(hash[x] == 1)
            {
                cout << "the pair of numbers are : " << i << " " << x << endl;
                hash[x] = 0;
            }
        }
    }
}

void pairSum(int *a, int n, int k)
{
    
    int start = 0;
    int end = n - 1;

    while(start < end)
    {
        if(a[start] + a[end] == k)
        {
           cout << a[start] << " " << a[end] << " ";
           start++, end--;
        }
        else if(a[start] + a[end] > k)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter the sum : ";
    cin >> k;

    // if the array is not sorted
    // find_pair(a, n, k);

    // if the array is sorted
    pairSum(a, n, k);

    
}