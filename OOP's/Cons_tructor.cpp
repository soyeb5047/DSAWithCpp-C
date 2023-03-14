#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    private : 
    int length;
    int breath;

    public : 

    // rectangle()     // default constructor
    // {
    //     length = 1;
    //     breath = 1;
    // }
    
    // rectangle(int l = 1 , int b = 1)        // perimeterized constructor
    // {
    //     setLength(l);
    //     setBreath(b);
    // }

    rectangle(int length = 1 , int breath = 1)        // perimeterized constructor using this pointer
    {
        this->length = length;
        this->breath = breath;
    }

    rectangle(rectangle &r1)        // deep copy constructor
    {
        length = r1.length;
        breath = r1.breath;
    }

    void setLength(int l )
    {
        if(l > 0)
            length = l;
        else
            length = 1;
    }

    void setBreath(int b)
    {
        if(b > 0)
        {
            breath = b;
        }
        else
            breath = 1;
    }

    int area()
    {
        return length * breath;
    }
};

int main()
{
    rectangle r(10, 5);
    // r.setBreath(10);
    // r.setLength(5);
    rectangle r2(r);
    cout << r.area() << endl;
    cout << r2.area() << endl;
}