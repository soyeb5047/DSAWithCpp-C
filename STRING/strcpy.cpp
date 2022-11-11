#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[10]="good";
    char s2[20]="";
    
    strncpy(s2,s1,3); //strcpy(s2,s1);------>good
    
    cout<<s2<<endl;
}
