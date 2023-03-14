#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }

    int paremeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    rectangle r;
    rectangle *p; // pointing in stack class
    p = &r;
    p->length = 10, p->width = 10;
    cout << p->area() << endl;

    rectangle *q = new rectangle; // creating in heap
    q->length = 10, q->width = 4;
    cout << q->area() << endl;
}