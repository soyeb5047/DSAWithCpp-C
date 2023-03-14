#include<bits/stdc++.h>
#include<numeric>       // use for accumulate
using namespace std;

struct arr
{
    int a[10];
    int size;
    int length;
};

int Sum(arr a)
{
    int sum = 0;
    return accumulate(a.a, a.a + a.length, sum);
}

int avg(arr a)
{
    int totalSum = Sum(a);
    return totalSum / a.length;
}

int minEle(arr a)
{
    int min = a.a[0];
    for(int i = 0; i < a.length; i++)
    {
        if(a.a[i] < min)
            min = a.a[i];
    }
    return min;
}

int maxEle(arr a)
{
    int max = a.a[0];
    for(int i = 0; i < a.length; i++)
    {
        if(a.a[i] > max)
            max = a.a[i];
    }
    return max;
}

int getEle(arr a, int pos)
{
    if(pos >= 0 && pos < a.length)
        return a.a[pos];
    else
        return -1;
}

int main()
{
    arr a = {{4, 5, 6, 2, 8, 9}, 10, 6};
    
    int pos;
    cout <<"Enter the pos which you want : ";
    cin >> pos;

    cout << "The element is : "<<getEle(a, pos) << endl;

    cout << "maximum number : " << maxEle(a) << endl;

    cout << "Minimum number : " << minEle(a) << endl;

    cout << "The sum of array : " << Sum(a) << endl;

    cout << "avg of array : " << avg(a) << endl;

}