#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }
        Complex(int r, int i)
        {
            // this->real = r;
            real = r;
            // this->img = i;
            img = i;
        }

        // we use here friend so that is the friend operator overloading function
        friend Complex operator+(Complex c1, Complex c2)
        {
            Complex temp;
            temp.real = c1.real + c2.real;
            temp.img = c1.img + c2.img;

            return temp;
        }
        

        void display()
        {
            cout << "The real Part is : " << real << " and the img part is : " << img << endl;
        }
};

// if we use this friend function we don't need to use the scope resolution operator
// Complex operator+(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;

//     return temp;
// }

int main()
{
    int r1, i1, r2, i2;
    cout << "Enter the real and the imaginary part : ";
    cin >> r1 >> i1;

    Complex c1(r1, i1);

    cout << "Enteer the another real and imaginary part : ";
    cin >> r2 >> i2;

    Complex c2(r2, i2);

    // Complex c3 = c1.add(c2);

    // c3.display();

    // now we use operator overloding
    //  we don't write this like complex c3 = c1.operator+(c2) instead of we write this 
    Complex c3 = c1 + c2;

    c3.display();
}