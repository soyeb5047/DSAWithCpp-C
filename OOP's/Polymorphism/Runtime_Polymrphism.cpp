#include<bits/stdc++.h>
using namespace std;

// it is the example of generalization because there are two child class those are inhertied from one class car which is not exist in real world

// pure virtual function means it must be inherited by child class if any class has pure virtual function then it is called as abstract

// the purpose of inheritance is reuseability it means child class borrow or use those functions in child class

class car
{
    public:
    // virtual void start()
    // {
    //     cout << "Car started.\n";
    // }

    // it is a pure virtual class
    virtual void start() = 0;


    // virtual void stop()
    // {
    //     cout << "Car Stopped.\n";
    // }
    virtual void stop() = 0;

};

class innova : public car
{
    public:
    // function oevrrided
    void start()
    {
        cout << "Innova started.\n";
    }

    void stop()
    {
        cout << "Innova stopped.\n";
    }
};

class swift : public car 
{
    public:
    void start()
    {
        cout << "Swift started.\n";
    }

    void stop()
    {
        cout << "Swift stopped.\n";
    }
};

int main()
{
    // polymorphism is only access by the pointer not only simple object
    
    // base class pointer and child class object
    car *c;
    c = new innova;
    c->start();

    c = new swift;
    c->stop();
}