#include<bits/stdc++.h>
using namespace std;

int divide(int a, int b)
{
    if(b == 0)
        throw 2;
    return a / b;
}

int main()
{
    int a = 10, b = 0, c;

    try
    {
        // if i want to perform this operation within the function then throw works inside the function
        c = divide(a, b);

        cout << "The value of c is : " << c << endl;

    }
    catch(int x)
    {
        cout << "The value of b is 0. Please fix it.\n";
    }
    
}