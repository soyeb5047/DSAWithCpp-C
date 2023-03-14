#include<bits/stdc++.h>
using namespace std;
struct arr
{
    int a[10];
    int size;
    int length;

};

int findEle(arr a, int k)
{
    int pos = -1;
    for(int i = 0; i < a.length; i++)
    {
        if(a.a[i] == k)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    arr a = {{1, 2, 34, 5, 7, 8}, 10, 6};

    int key;
    cout << "Enter the number which you want to search : ";
    cin >> key;

    cout << "The position of this element is : " << findEle(a, key);
}