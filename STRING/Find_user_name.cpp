#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "soyebsk3861@gmail.com";
    
    int x = str.find('@');
    
    string sub = str.substr(0,x);
    
    cout<< sub << endl;
    
   /* int x = 0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == '@')
        {
            x = i;
            
            cout<<i<<endl;
        }
    }
    
    for(int i=0; i<x; i++)
    {
        cout<<str[i];
    }
    str[x]='\0';    */
}
