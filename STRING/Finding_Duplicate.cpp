#include<bits/stdc++.h>
using namespace std;

/*
void duplicate(string a)
{
    // using hash table
    int charArray[26] = {0};

    for(int i = 0; i < a.length(); i++)
    {
        int index = a[i] - 'a';
        charArray[index]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(charArray[i] > 1)
        {
            // cout << i + 'a' << " "; 
            printf("%c ", i + 'a');
        }
    }
}

*/

// using bitwise operator
void duplicate(string a)
{
    // we take 4 byte integer which are set to 0
    int h = 0, x = 0;

    for(int i = 0; i < a.length(); i++)
    {
        // we set x to check it corrosponding h 
        x = 1;

        // we shift the 1 till the char position
        x = x << (a[i] - 'a');

        // now we masking h with x if it larger than 0 it means h is already set means this character is duplicate
        if((h & x) > 0)     // and operation means masking
        {
            cout << a[i] << " is the duplicate character.\n";

        }

        // if it is not set then we set the h
        else
        {
            h = (h | x);        // it is called mering
        }
    }
}

int main()
{
    char a[] = "geeksforgeeks";
    // int n = sizeof(a) / sizeof(a[0]);

    // cout << n;
    // char a[];
    // gets(a);
    

    duplicate(a);
}