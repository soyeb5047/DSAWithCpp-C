#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << "The real part is : " << real << " the img part is : " << img << endl;
    }

    // this operator is also a friend function
    friend ostream &operator<<(ostream &out, Complex c1)
    {
        out << "The real part is : " << c1.real << " the img part is : " << c1.img << endl;
        return out;
    }
};

int main()
{
    Complex c1(2, 5);

    // if we display the c1 so we call display function
    c1.display();

    // instead of using function we use operator overloading function called insertion operator overloading
    cout << c1;
}