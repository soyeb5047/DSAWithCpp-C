#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> v = {10, 20, 30};

    v.push_front(40);
    v.push_front(50);

    //v.pop_back();     we don't use push_back, pop_back in singly linked list

    // for(int x:v)    //using for each loop
    // {
    //     cout << ++x << " ";
    // }

    forward_list<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << ++*it << " ";
    }
}