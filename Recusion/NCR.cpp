#include<bits/stdc++.h>
using namespace std;

/*
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int fact(int n, int r)
{
    int x = factorial(n);
    int y = factorial(r);
    int z = factorial(n - r);

    return x / (y * z);
}
*/

int fact(int n, int r)
{
    // 0 <= r <= n
    // using pascal's triangle
    
    if(n == r || r == 0)
    {
        return 1;
    }
    return fact(n - 1, r - 1) + fact(n - 1, r);
}

int main()
{
    int n;
    cin >> n;

    int r;
    cin >> r;

    cout << fact(n, r);

}