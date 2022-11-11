#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[20]="programming";
    char s2[20]="gram"; //cahr s2[20]="k";
    
    if(strstr(s1,s2)!=NULL)
    cout<<strstr(s1,s2)<<endl; //strstr--->sub-string
    else
    cout<<"not found"<<endl;
}
