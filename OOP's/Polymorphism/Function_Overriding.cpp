#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
    void display()
    {
        cout << "This function is in parent class.\n";
    }
};

class child : public Parent{
    public:
    // we rewrite the function again so this is called as function override
    void display()
    {
        cout << "This function is in child class.\n";
    }
};

int main()
{
    Parent p;
    p.display();

    child c;
    // display function gives the output of this class
    c.display();
}