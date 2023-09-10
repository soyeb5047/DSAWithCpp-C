#include<bits/stdc++.h>
using namespace std;

// friend function
// class base
// {
//     private:
//     int a;

//     protected:
//     int b;

//     public:
//     int c;

//     friend void access();
// };

// // if we access those member by calling a function then it gives a error
// // if we acess the private and protected then this function make as friend of this function
// void access()
// {
//     base B;

//     B.a = 10;
//     B.b = 20;
//     // we can access only public members 
//     B.c = 30;
    
// }

// friend class
// it is must be decleare base1 before base class
class base1;
class base
{
    private:
    int a = 10;

    friend base1;
};

class base1
{
    public:
    int b = 19;

    // we must declear an object to access base class
    base B;
    void display()
    {
        // if i access the member of base class it gives an error
        // if i want to access then we has to made this class as a friend class to the base class 
        cout << "The value of A from base class is : " << B.a << endl;
        cout << "The value of B from base1 class is : " << b << endl;

    }
};

int main()
{
    base1 B;
    B.display();
}