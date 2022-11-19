#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> v = {10, 20, 30, 30};      // it also gives unique values

    v.insert(40);
    v.insert(50);

    //v.pop_back();     we don't use push_back, pop_back in set

    // for(int x:v)    //using for each loop
    // {
    //     cout << ++x << " ";
    // }

    set<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}