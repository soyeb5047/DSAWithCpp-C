#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};     //this 2D array we make in stack
    
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //Now we make an Array in Heap
    
    int *b[3];  //we make 3 rows of 2D array
    int **c;
    
    b[0]=(int*) malloc(4*sizeof(int));      // insert 4 column for each column
    b[1]=(int*) malloc(4*sizeof(int));
    b[2]=(int*) malloc(4*sizeof(int));
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    c=(int**) malloc(3*sizeof(int*));       //we make 3 rows in heap for 2 poniter Array
    c[0]=(int*) malloc(4*sizeof(int));          //now insert 4 columns for each rows
    c[1]=(int*) malloc(4*sizeof(int));
    c[2]=(int*) malloc(4*sizeof(int));
    
     for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
