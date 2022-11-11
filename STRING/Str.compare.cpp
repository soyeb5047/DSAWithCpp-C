#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "soyeb";
    string str2 = "soYeb";

    cout<<str1.compare(str2)<<endl;     // if two string are equal so it gives 0, if str1 is greater then it gives (negative), if str1 is greater then it gives (postive)

    //cout<<strcmp(str1,str2)<<endl;        strcmp use for char so it gives error
}