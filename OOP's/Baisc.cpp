#include<bits/stdc++.h>
using namespace std;

class rectangel
{
    public:
    int length; // it takes 4 bytes
    int width; // it takes 4 bytes 

    // so the class takes total 4 + 4 = 8 byte space

    int area(int a, int b) // functions are not taking any space
    {
        return a * b;
    }

    int perimeter(int a, int b)
    {
        return 2 * (a + b);
    }
};

int main()
{
    rectangel r1, r2; // these are the objects

    r1.length = 10, r1.width = 10; // it takes another space in heap

    cout << r1.area(r1.length, r1.width) << endl;
    
    r2.length = 10, r2.width = 5; // it takes another space in heap

    cout << r2.perimeter(r2.length, r2.width) << endl;
}