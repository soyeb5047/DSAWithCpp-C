#include<iostream>
#include<string>
using namespace std;

char lower(char ch)
{
    if(ch >= 65 && ch <=90)
    {
        ch += 32;
    }

    return ch;
}

int Palindrome(string str)
{
    int s = 0;
    int n = str.length() - 1;

    int flag = 0;

    while(s<=n)
    {
        if(lower(str[s]) == lower(str[n]))
        {
            s++;n--;
            flag = 1;
        }
        else if(str[s] != str[n])
        {
            break;
            flag = 0;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    string str = "Madam";

   /* int n = str.length();

    string c = "";

    
    c.resize(n);

    for(int i = 0,j = n-1; i<n; i++,j--)
    {
        c[i] = str[j];
    }
    c[n] = '\0';

    cout<< c <<endl;    */

    cout<< Palindrome(str) << endl;
}