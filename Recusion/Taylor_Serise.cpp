// Taylor serise means (e^x)
// it is the combination of sum of natural number, factorial, power_base

#include<iostream>
using namespace std;

double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double result;

    if(n == 0)
    {
        return 1;
    }
    else
    {
        result = taylor(x,n-1);

        p *= x;
        f *= n;

        return result + p / f;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;

    double y = (taylor(x,n));

    cout << y << endl;
}