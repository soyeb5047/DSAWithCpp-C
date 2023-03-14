#include<bits/stdc++.h>
using namespace std;

struct arr
{
    int ar[10];
    int size;
    int length;
};

struct arr* mergeArr(arr *a1, arr *a2)
{
    arr *a3 = (struct arr*)malloc(sizeof(struct arr));

    int i = 0, j = 0, k = 0;
    while(i < a1->length && j < a2->length)
    {
        if(a1->ar[i] > a2->ar[j])
        {
            a3->ar[k++] = a2->ar[j++];
        }
        else if(a1->ar[i] < a2->ar[j])
        {
            a3->ar[k++] = a1->ar[i++];
        }
        else
        {
            a3->ar[k++] = a2->ar[j++];
            i++;
        }
    }

    while(i < a1->length)
        a3->ar[k++] = a1->ar[i++];

    while(j < a2->length)
        a3->ar[k++] = a2->ar[j++];

    a3->length = a1->length + a2->length;
    a3->size = 20;

    return a3;
}

int main()
{
    arr a1 = {{1,2, 5, 6, 3}, 10, 5};
    arr a2 = {{10, 5, 3, 9}, 10, 4};

    arr *a3;

    a3 = mergeArr(&a1, &a2);

    for(int i = 0; i < a3->length; i++)
    {
        cout << a3->ar[i] << " ";
    }

}