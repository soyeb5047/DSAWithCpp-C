#include<iostream>
using namespace std;

int KthLargest(int *a,int n,int k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(k <= n-1)
        return a[n-1-k];
        else
        return -1;
    }
    //return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout << KthLargest(a,n,k) << endl;
}
