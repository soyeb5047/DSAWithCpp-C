#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[10]="good";
    char s2[20]="morning";
    
    strcat(s1,s2); //strncat(s1,s2,4);
    
    cout<<s1<<endl;
}
