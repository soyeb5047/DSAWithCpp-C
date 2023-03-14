#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int width;

    public:
    void setLength(int l)       // set___ -> it's call mutator
    {
        if(l >= 0)
            length = l;
            
        
        else
            length = 0;
    }

    void setWidth(int w)
    {
        if(w >= 0)
            width = w;
        else
            width = 0;
    }

    int getLength()             // get___ -> it's call Accesor
    {
       return length;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{
    rectangle r;

    int l, w;
    cin >> l >> w;

    r.setLength(l);
    r.setWidth(w);

    if(r.getLength() == 0)
        cout << "Length is not available for negative value.\n";
    else
        cout << r.getLength() << endl;

    cout << r.area() << endl;
}