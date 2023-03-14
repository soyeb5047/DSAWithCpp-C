#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    private : 
    int length;
    int breath;

    public:
    rectangle(int l = 1,int b = 1)
    {
        setLength(l);
        setBreath(b);

    }

    void setLength(int l)
    {
        if(l > 0)
            length = l;
        else
            length = 1;
    }

    void setBreath(int b)
    {
        if(b > 0)
            breath = b;
        else
            breath = 1;
    }

    int area()
    {
        return length * breath;
    }

    int perimeter();
};

int rectangle::perimeter()      // scope resolution operator
{
    return 2*(length + breath);
}

int main()
{
    rectangle r(10, 5);

    cout << r.area() << " ";        // inline function
    cout << r.perimeter() << endl;
}