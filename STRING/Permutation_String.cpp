/*
input:
abc

output:
abc, acb, bca, bac, cab, cba

*/
#include<bits/stdc++.h>
using namespace std;

// void permutation(string s, int k)
// {
//     // we use here recursion and back-tracking that's why we use static
//     static int a[10] = {0};
//     static char res[10];

//     if(s[k] == '\0')
//     {
//         res[k] = '\0';
//         cout << res << " ";
//     }
//     else
//     {
//         for(int i = 0; s[i] != '\0'; i++)
//         {
//             if(a[i] == 0)
//             {
//                 res[k] = s[i];
//                 a[i] = 1;
//                 permutation(s, k + 1);
//                 a[i] = 0;
//             }
//         }
//     }
// }

void permutation(string s, int l, int h)
{

    if(l == h)
    {
        cout << s << " ";
    }

    else
    {
        for(int i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            permutation(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    // char a[] = "abc";
    string str = "abc";
    // permutation(a, 0);

    int l = 0;
    int h = str.length() - 1;

    permutation(str, l, h);
}