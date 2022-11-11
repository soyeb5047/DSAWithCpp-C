#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[20]="10+5=15+0";
    
    char *ptr=strtok(a,"=");  //string tokenizer ---> it returns next tokenizer;   strtok()-->it is a static variable
    
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=strtok(NULL,"+");  //it requires a NULL pointer
    }
}
