#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "soyeb";

    cout<< str.at(2)<<endl;     // it prints the letter at index 2  at is similar with str[2]

    cout << str[3] << endl;

    cout<< str.front() <<endl;      // it gives the first index letter in the string

    cout<< str.back() <<endl;       // it gives the last index letter in the string

    string str1 = " sahil";

    cout << str + str1 <<endl;      // + sign use for concatination

    /*
    str += " sahil";
    cout<< str <<endl;      
    */

   str = str1;      // str copied or assigned str1
   cout << str << "\n" <<str1 <<endl;

}