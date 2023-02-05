#include <iostream>
using namespace std;

void fA(int n);
void fB(int n);

int main()
{
    int n;
    cin >> n;

    fA(n);
}

void fA(int n)
{
    if (n > 0)
    {
        cout << n << " ";

        // we call fB function in this function
        fB(n - 1);
    }
}

void fB(int n)
{
    if (n > 1)
    {
        cout << n << " ";

        // fB function call fA function again this is Indirected Recursion
        fA(n / 2);
    }
}