#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    // void display()
    // {
    //     cout << "This is base function.\n";
    // }

    virtual void display()
    {
        cout << "This is base function.\n";
    }
};

class derive : public base
{
    public :
    void display()
    {
        cout << "this is derive function.\n";
    }
};

int main()
{
    derive d;
    // it gives the output of derive class
    d.display();

    // base *p = &d;
    // // base class pointer derive class object gives base class ouput although this fuction is override
    // p->display();

    // if we overcome this ambiguity problem so we use virtual before this function in base class
    base *p = &d;
    p->display();
}