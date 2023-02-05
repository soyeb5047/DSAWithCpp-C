#include <iostream>
using namespace std;

// nested recursion means recursion with in recursion

int nested(int n)
{
    if (n > 100)
        return n - 10;
    return nested(nested(n + 11));
}

int main()
{
    int n;
    cin >> n;

    cout << nested(n) << endl;
}