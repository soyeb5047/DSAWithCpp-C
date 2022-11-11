#include<bits/stdc++.h>
using namespace std;

void max_element(int arr[],int n)
{
    int max = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    max_element(arr,n);
}