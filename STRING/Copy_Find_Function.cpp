#include <iostream>
#include<string>
using namespace std;

int main()
{
    /*   string str="soyeb";
    
       char s[10];
    
      // str.copy(s,str.length());     // str copy in s char type array

    str.copy(s,3);      // it takes 3 char but gives at end garbage value
    s[3]='\0';      // we give NULL char at index 3
    
    cout<<s<<endl; */

    string str="Hello i am soyeb";

    cout<<str.find("am")<<endl; // 8

    cout<<str.find('l')<<endl;     // 2 , we can use single coute or double coute

    cout<<str.rfind('l')<<endl;     // 3 , it check reversely and get the index

    cout<<str.find_first_of("l")<<endl;       // 2, it gives the first occurance of l

    cout<<str.find_last_of("l");        // 3, it gives the last occurance of l
}
