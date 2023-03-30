/*
an complex number is 3 + 7i
here 3 is real part and the 7i is the imaginary part
*/

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

        Complex add(Complex x)
        {
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;

            return temp;
        }

        Complex operator+(Complex x)
        {
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;

            return temp;
        }

        void display()
        {
            cout << "The real Part is : " << real << " and the img part is : " << img << endl;
        }
};

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