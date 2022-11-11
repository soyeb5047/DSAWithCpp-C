#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[20]="245";
    char b[20]="20.84";
    
    //string to long integer
    long int x=strtol(a,NULL,10);  //245 is the decimal number so we use 10,if there is a binary number so we use 2--->actually this is a number system
    
    //string to float
    float y=strtof(b,NULL);
                                //now you can use any operations
    cout<<x<<" "<<y<<endl;
}
