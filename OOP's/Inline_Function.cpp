#include<bits/stdc++.h>
using namespace std;

class print
{
    public: 
    void Inline()
    {
        cout << "it is also an inline\n";
    }

    void NotInline();

    inline void IInline();
};

void print::NotInline()
{
    cout << "It is not inline function\n";
}

inline void print::IInline()
{
    cout << "It is inline\n";
}

int main()
{
    print p;
    p.Inline();
    p.IInline();
    p.NotInline();
}