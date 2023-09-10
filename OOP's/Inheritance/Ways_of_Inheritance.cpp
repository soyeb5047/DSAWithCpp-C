#include<bits/stdc++.h>
using namespace std;

class parent
{
    // it is the parent class so we can acess private data members
    private:
    int a;

    protected:
    int b;

    public:
    int c;
    void get()
    {
        a = 10;
        b = 20;
        c = 10;
    }
};

class child : public parent
{
    // if child class publically inherted then it doesn't acess the private data members
    // if child class protectedly inherted then it doesn't acess the private data members
    // if child class privately inherted then it doesn't acess the private data members
    private:

    protected:

    public:
    void get()
    {
        // a = 10;
        b = 20;
        c = 30;
    }
};

class grandChild : public child
{
    // child class doesn't acess private data members so grandchild class can't acess this private data member
    // child class doesn't acess private data members so grandchild class can't acess this private data member if child class is protectedly inherit
    // grandchild class can't acess this private, protected, public data member if child class is privately inherit

    private:

    protected:

    public:

    void get()
    {
        // a = 10;
        // b = 20;
        // c = 30;
    }
};

int main()
{
    child c;
    // an object acess this
    // c.a = 10;    we can't acess this if child class privately, protectedly, publically inherited
    
    // c.b = 20;    we can't acess this if child class privately, protectedly inherited
    // c.b = 20;    we can't acess this if child class publically inherited because it is protected in parent class
    // c.c = 30;    //we can't acess this if child class privately, protectedly inherited
    c.c = 30;
}