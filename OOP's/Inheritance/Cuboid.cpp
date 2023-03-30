#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }

    void setLength(int l)
    {
        this->length = l;
    }

    void setBreadth(int b)
    {
        this->breadth = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    void display()
    {
        cout << "The langth is : " << length << " and breadth is : " << breadth << endl;
    }
};

class cuboid : public rectangle
{
    // we can't directly acess the length and breadth but acess all the public items
    private:
    int height;

    public:
    cuboid(int l = 0, int b = 0, int h = 0)
    {
        height = h;
        
        // we can't derive the length and breadth value because they are private in rectangle class so we use this
        setLength(l);
        setBreadth(b);
    }

    void setHeigth(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    void show()
    {
        cout << "The length is : " << getLength() << ", the breadth is : " << getBreadth() << ", height is : " << height << endl;
    }

    friend ostream &operator<<(ostream &out, cuboid c)
    {
        out << "The length is : " << c.getLength() << ", the breadth is : " << c.getBreadth() << ", height is : " << c.height << endl;
    }
};

int main()
{
    cuboid c(10, 15, 20);

    // cout << c.getLength();
    // c.show();
    // cout << c.getHeight();

    // using operator overlading
    cout << c;
}