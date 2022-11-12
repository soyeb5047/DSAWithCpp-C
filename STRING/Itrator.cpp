#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "I am Soyeb";

    string::iterator it;

    for(it = str.begin(); it != str.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    string::reverse_iterator itr;

    for(itr = str.rbegin(); itr != str.rend(); itr++)       //rbegin points on end point  and rend points in first point
    {
        cout<<*itr;
    }
}