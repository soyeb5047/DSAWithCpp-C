#include<bits/stdc++.h>
using namespace std;

class base
{
    private:
    int a = 10;
    int b = 20;

    public:
    // we can access the static member within class and outside class
    static int count;

    base()
    {
        a++;
        b++;
        count++;
    }

    static void func()
    {
        // we can modify only the static members not nonstatic members
        // a++;
        count++;
        cout << "The count is inside the function : " << count << endl;
    }
};

// we access static member outside the class by using scope resolution
int base :: count = 0;

int main()
{
    base b1;
    cout << "Value of count is : " << b1.count << endl;
    b1.func();

    base b2;
    cout << "Value of count is : " <<  b2.count << endl;
    b2.func();

    // we can access by using scope resolution operator
    cout << "Value of count is : " << base::count<< endl;

    base::func();
}