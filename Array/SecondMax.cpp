#include<iostream>
#include<climits>
using namespace std;

int Smax(int *a,int n)
{
    int largest = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(a[i]  > largest)
        {
            largest = a[i];
        }
    }

    int second = INT_MIN;
    int flag = 0;

    for(int i=0; i<n; i++)
    {
        if(second < a[i] && a[i] != largest)
        {
            second = a[i];
            flag = 1;
        }
    }

    if(flag == 1)
    {
        return second;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<< Smax(a,n)<<endl;
}