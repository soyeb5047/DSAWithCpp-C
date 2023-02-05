#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    if(exponent == 0)
        return 1;
    return base * power(base,exponent-1);
}

int main()
{
    int base, exponent;

    cin >> base >> exponent;

    cout << power(base,exponent) << endl;
}