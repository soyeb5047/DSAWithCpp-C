/*
inheritance is a sub class that is derived from the base class

1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
            {            }
*/

#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    int x;
    void show()
    {
        cout << "The number is in base Class which value is : " << x << endl;
    }
};

// we derive the base class in this class 
// it means the here we get x and show() function 
class derive : public base
{
    public:
    int y;
    void display()
    {
        cout << "the number of x is : " << x << " and the value of y is : " << y << endl;
    }
};

int main()
{
    base b;
    b.x = 10;
    b.show();

    derive  d;
    d.x = 20;
    d.y = 15;
    d.display();
    d.show();
}