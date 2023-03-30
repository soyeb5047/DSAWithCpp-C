#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

    public:
    Complex()
    {
        real = 1;
        img  = 1;
    }

    Complex(int r, int i)
    {
        setRealData(r);
        setImgData(i);
    }

    void setRealData(int x)
    {
        real = x;
    }

    void setImgData(int x)
    {
        img = x;
    }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    friend ostream &operator<<(ostream &out, Complex c3)
    {
        out << "The real part is : " << c3.real << " and img part : " << c3.img;
        // return out;
    }
};

int main()
{
    Complex c1(2, 5), c2(3, 4), c3;

    c3 = c1 + c2;

    cout << c3 << endl;
}