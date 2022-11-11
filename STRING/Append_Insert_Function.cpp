#include<iostream>
#include<string>
using namespace std;

int main(){

    string str="Hello";

    /*   cout<<str.capacity()<<" "<<str.length()<<endl;

    str.append(" World. My name is soyeb. How are you all? I am also fine.");   //append this word or sentance after hello word

    cout<<str.capacity()<<" "<<str.length()<<endl;   */

    str.insert(3,"soyeb",2);     //insert soyeb at 3rd index but for 2 it insert so at 3rd index
    
    cout<<str<<endl;
}