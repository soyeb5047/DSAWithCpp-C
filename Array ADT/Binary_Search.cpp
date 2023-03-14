#include<bits/stdc++.h>
using namespace std;

struct arr
{
    int a[20];
    int size;
    int length;

};

int Binary(arr a, int k)
{
    int start = 0, end = a.length - 1;

    while(start <= end)
    {
        int mid = (start + end)  / 2;
        if(a.a[mid] == k)
        {
            return mid;
        }

        else if(a.a[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    arr a = {{1, 2, 3, 4, 5}, 10, 5};

    int k;
    cout << "Enter the element which you want to search : ";
    cin >> k;

    cout << Binary(a, k);
}