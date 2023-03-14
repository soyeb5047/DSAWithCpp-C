/*
****** anagram means if the two words are same
input:
medical
decimal

output : 
this two words are anagram
*/

#include<bits/stdc++.h>
using namespace std;

int isAnagram(string a, string b)
{
    int hash[26] = {0};
    for(int i = 0; a[i] != '\0'; i++)
    {
        int index = a[i] - 'a';
        hash[index]++;
    }

    for(int i = 0; b[i] != '\0'; i++)
    {
        int index = b[i] - 'a';
        hash[index]--;
    }

    int flag = 1;

    for(int i = 0; i < 26; i++)
    {
        if(hash[i] > 0)
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char a[] = "decimal";
    char b[] = "medical";

    if(isAnagram(a, b))
    {
        cout << "this two strings are anagram.\n";
    }
    else
    {
        cout << "This two strings are not anagram.\n";
    }
}