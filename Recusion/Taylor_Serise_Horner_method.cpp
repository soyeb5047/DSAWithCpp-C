#include<iostream>
using namespace std;

/*
int taylor(int x, int n)
{
    int result = 1;
    while(n > 0)
    {
        result = 1+ x / n * result;
        n--;
    }
    return result;
}
*/

int taylor(int x, int n)
{
    static int result = 1;

    if(n == 0)
        return result;

    result = 1 + x / n * result;
    return taylor(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << taylor(x,n) << endl;
}