#include<iostream>
#define N 50
using namespace std;

int main(){
    int m,n,p,q;
    int c[N][N];
    cin>>m>>n;
    int a[N][N];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>p>>q;
    int b[N][N];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    int sum;
    if(n!=p){
         cout<<"error"<<endl;
        }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            sum=0;
                for(int k=0;k<n;k++){
                
                
                sum+=a[i][k]+b[k][j];
                
            }
            c[i][j]=sum;
        }
    }    
        
}
    
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}