#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str="soyeb";
    cout<<str.length()<<endl; //str.size()
    
    cout<<str.capacity()<<endl;
    
    str.resize(50);
    cout<<str.capacity()<<endl;
    
    if(str.empty()){
        cout<<"string is empty"<<endl;
    }
    else{
        cout<<"string is "<<str<<endl;
    }
    
    str.clear();
    cout<<str.length()<<endl;
    
}
