#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "programming";

    int count=0,i=0;

    // for(int i=0; str[i]!='\0'; i++)      using for loop
    // {
    //     count++;
    // }

    // while(str[i] != '\0')        using while loop
    // {
    //     count++;
    //     i++;
    // }

    string::iterator it;

    for(it = str.begin(); it != str.end(); it++)       // using iterator
    {
        count++;
    }

    cout<<count<<endl;
}