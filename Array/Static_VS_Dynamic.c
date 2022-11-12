#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5]={1,2,3,4,5};
    
    //make an array in heap
    int *p;
    p=(int*) malloc(5*sizeof(int));
    p[0]=3;
    p[1]=4;
    p[2]=7;
    p[3]=1;
    p[4]=9;
    
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);   //this array make in stack ----> it is Static Array
    }
    
    printf("\n");
    
    for(int i=0;i<5;i++){       //this array make in heap -----> it is a Dynamic Array
        printf("%d ",p[i]);
    }
    
}