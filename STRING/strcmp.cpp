#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[10]="hello";
    char s2[20]="hello";
    cout<<strcmp(s1,s2)<<endl; //strcmp--->string compare according to dictionary ,     if both are same return 0;
    
    char s3[10]="Hello";
    char s4[10]="hello";
    cout<<strcmp(s3,s4)<<endl; //if there is capital letter and small letter it take difference using ASCII value or return -1/+1
    
    char s5[10]="mimma";
    char s6[10]="bappa";
    cout<<strcmp(s5,s6)<<endl; //there is same diff between first letters using ASCII value or return -1/+1
}
