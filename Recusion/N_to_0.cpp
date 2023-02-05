#include <iostream>

using namespace std;

void rev(int n){
    if(n>=0){
        cout<<n<<" ";
        rev(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    rev(n);
}