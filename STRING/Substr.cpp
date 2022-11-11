#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "programming";

    cout<<str.substr(3)<<endl;      //substr is sub string      it prints the sub string from index no. 3

    cout<<str.substr(3,4)<<endl;    // it prints the sub from index number 3 to 4 letters
}