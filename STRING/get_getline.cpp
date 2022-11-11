#include<iostream>
using namespace std;
int main(){
    char s[20];
    cout<<"enter your name: ";
    cin.get(s,20);   //cin.getline(s,20);
    cout<<s<<endl;
    
    cin.ignore();   //for overcome the fault
    
    char s1[20];
    cout<<"enter your name: ";
    cin.get(s1,20);    //cin.getline(s1,20);
    cout<<s1<<endl;
}