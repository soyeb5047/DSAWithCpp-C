#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> v = {10, 20, 30};     // now it uses doubly linked list concept

    v.push_back(40);
    v.push_back(50);

    v.pop_back();

    // for(int x:v)    //using for each loop
    // {
    //     cout << ++x << " ";
    // }

    list<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << ++*it << " ";
    }
}