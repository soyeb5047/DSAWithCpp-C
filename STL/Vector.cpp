#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    v.push_back(40);
    v.push_back(50);

    v.pop_back();

    // for(int x:v)    //using for each loop
    // {
    //     cout << ++x << " ";
    // }

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << ++*it << " ";
    }
}