#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct arr
{
    int ar[20];
    int size;
    int length;
};

struct arr* intersect(arr *a1, arr *a2)
{
    arr *a4 = (struct arr*)malloc(sizeof(struct arr));
    int k = 0, i =0, j= 0;

    // for unsorted array ->

    // for(int i = 0; i < a1->length; i++)
    // {
    //     for(int  j = 0; j < a2->length; j++)
    //     {
    //         if(a1->ar[i] == a2->ar[j])
    //         {
    //             a4->ar[k++] = a1->ar[i];
    //         }
    //     }
    // }

    // for sorted array ->

    while(i < a1->length && j < a2->length)
    {
        if(a1->ar[i] == a2->ar[j])
        {
            a4->ar[k++] = a1->ar[i++];
            j++;
        }
        else if(a1->ar[i] > a2->ar[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    a4->length = k;
    a4->size = 10;

    return a4;

}

struct arr* unionArr(arr *a1, arr *a2)
{
    // for unsorted array
    arr *a3 = (struct arr*)malloc(sizeof(struct arr));
    int k = 0, i = 0, j = 0;
    // for(int i = 0; i < a1->length; i++)
    // {
    //     a3->ar[k++] = a1->ar[i];
    // }

    // a3->length = a1->length;

    // for(int i = 0; i < a2->length; i++)
    // {
    //     int flag = 0;
    //     for(int j = 0; j < a3->length; j++)
    //     {
    //         if(a2->ar[i] == a3->ar[j])
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if(flag == 0)
    //     {
    //         a3->ar[k++] = a2->ar[i];
    //     }
    // }

    // a3->length = k;
    // a3->size = 20;
    
    // return a3;


    // for sorted array
    while(i < a1->length && j < a2->length)
    {
        if(a1->ar[i] > a2->ar[j])
        {
            a3->ar[k++] = a2->ar[j++];
        }
        else if(a1->ar[i] < a2->ar[j])
            a3->ar[k++] = a1->ar[i++];
        else{
            a3->ar[k++] = a1->ar[i++];
            j++;
        }
    }

    while(i < a1->length)
    {
        a3->ar[k++] = a1->ar[i++];
    }
    while(j < a2->length)
    {
        a3->ar[k++] = a2->ar[j++];
    }

    a3->length = k;
    a3->size = 20;
    
    return a3;
}

int main()
{
    arr a1 = {{2, 3, 6, 8, 9}, 10, 5};
    arr a2 = {{1, 3, 4, 8}, 10, 4};

    arr *a3 = unionArr(&a1, &a2);

    arr *a4 = intersect(&a1, &a2);

    for(int i = 0; i < a3->length; i++)
    {
        cout << a3->ar[i] << " ";
    }cout << endl;

    for(int i = 0; i < a4->length; i++)
    {
        cout << a4->ar[i] << " ";
    }

}