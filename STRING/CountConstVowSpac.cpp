#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Hello   I am Soyeb";

    int C_count = 0, V_count = 0, S_count = 0;

    for(int i=0; str[i] !='\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            V_count++;
        }
        else if(str[i] == str[i+1] && str[i] == ' ')    // if there exits extra number of space
        {
            //S_count++;
            continue;
        }
        else if(str[i] != str[i+1] && str[i] == ' ')
        {
            S_count++;
            //continue;
        }
        else{
            C_count++;          // count the number of consonant
        }
    }

    cout<< "Number of Consonant is : " << C_count <<endl;

    cout << "Number of Vowel is : " << V_count << endl;

    cout << "Number of words is : " << S_count + 1 << endl;
}