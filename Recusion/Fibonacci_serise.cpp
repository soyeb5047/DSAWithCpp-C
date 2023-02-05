#include <iostream>
using namespace std;

int fib(int n)
{
    // Memorylization method

    // time complexity -> O(n)

    int f[20] = {0};        

    if (n <= 1)
    {
        f[n] = n;
        return n;
    }

    else
    {
        if (f[n - 2] == 0)
        {
            f[n - 2] = fib(n - 2);
        }
        else if (f[n - 1] == 0)
        {
            f[n - 1] = fib(n - 1);
        }
        return fib(n - 1) + fib(n - 2);
    }
}

/*
int fib(int n)
{
    if(n <= 1)      // time complexity -> O(2^n)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
*/

/* int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int x = 0, y = 1, sum = 0;

    for(int i = 2; i <= n; i++)         // time complexity -> o(n)
    {
        sum = x + y;
        x = y;
        y = sum;
    }
    return sum;
}
*/

int main()
{
    int n;
    cin >> n;

    cout << fib(n);
}