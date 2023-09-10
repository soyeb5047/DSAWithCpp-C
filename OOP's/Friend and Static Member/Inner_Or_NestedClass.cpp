#include<bits/stdc++.h>
using namespace std;

class outer
{
    public:
    void function()
    {
        // if we directly call the function of nested class it gives an error so we must define nested class object
        n.func();

        // outer class can't access the private members of nested class
        // cout << "The value of Private member of nested class is : " << n.p << endl;
    }

    // creating a inner class
    // nested class access only the static data members
    class nested
    {
        private:
        int p = 10;

        public:
        void func()
        {
            cout << "This is a nested class.\n";
        }
    };
    nested n;
};

int main()
{
    outer o;
    o.function();

    outer :: nested i;
    i.func();
}