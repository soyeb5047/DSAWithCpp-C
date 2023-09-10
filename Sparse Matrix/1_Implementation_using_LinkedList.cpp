/*
a matrix which has most of the value zero this matrix is called sparse matrix

example:
1 0 0 0 
0 0 2 0
0 3 4 0


*/
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int col;
    int data;
    node *next;
};

void createNode(node **p)
{
    // take inputs where the value exists
    int row, column, value;
    cout << "Enter the row, col, value : ";
    cin >> row >> column >> value;

    node *q, *temp;

    if(p[row] == NULL)
    {
        // p[row] = new node;
        p[row] = (node*) malloc(sizeof(node));

        q = p[row];
        q->col = column;
        q->data = value;
        q->next = NULL;

    }
    else
    {
        q = p[row];

        // if there has an node so traverse for create new node
        while(q->next != NULL)
        {
            q = q->next;
        }

        // temp = new node;
        temp = (node*) malloc(sizeof(node));
        temp->col = column;
        temp->data = value;
        temp->next = NULL;
        q->next = temp;
    }
}

void display(node **p, int m, int n)
{
    // node *q;

    for(int i = 0; i < m; i++)
    {
        node *q = p[i];
        for(int j = 0; j < n; j++)
        {
            if(j == q->col)
            {
                cout << q->data << " ";
                if(q->next != NULL)
                    q = q->next;
            }
            else if(q == NULL)
                cout << 0 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the dimensions of 2D array : ";
    cin >> m >> n;

    int totalNumber;
    cout << "Enter the total non-Zero element in array : ";
    cin >> totalNumber;

    // make the array of node
    // here we make the node corresponding 2d array's row number
    // node **first = new node*[m];
    node **first = (node **)malloc(sizeof(node) * m);

    // for non zero elements make nodes 
    for(int i = 0; i < totalNumber; i++)
        createNode(first);

    display(first, m,n);
}