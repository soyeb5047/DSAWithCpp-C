#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "It is base\n";
    }

    base(int x)
    {
        cout << "The value in base is : " << x << endl;
    }
};

class derive : public base
{
    public:
    derive(){cout << "It is the derive\n";}

    derive(int x)
    {
        cout << "The value in derive is : " << x << endl;
    }

    derive(int x, int y) : base(y)
    {
        cout << "The value of x is : " << x << endl;
    }
};

int main()
{
    // it goes in base class default constructor, then derive
    // derive d;

    // it goes in base class default constructor, then derive
    // derive d(10);

    // it firstly goes in base perimeterize constructor then comes in calling constructor
    // if we don't give :base(y) then it firstly goes to in base default constructor the came in calling constructor
    derive d(10, 20);
}