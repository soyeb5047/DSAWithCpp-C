// there is also try, throw, catch 
// try allows user for test the errors
// throw gives exceptions
// catch executed when there is an error in try block 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    try
    {
        if(b == 0)
            throw 2;
            
        c = a / b;
        cout << "The value of c is : " << c << endl;
    }
    // throw gives an integer value so we take integer as perameter
    // catch also takes atleast one parameter
    catch(int x)
    {
        cout << "There is an error in try block.\n";
    }
    
}