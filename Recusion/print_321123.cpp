#include <iostream>
#include <stdio.h>
using namespace std;

void printing(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    printing(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    printing(n);
}