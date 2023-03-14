#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct arr
{
    int n;
    int *a;
};

// for column major method use use this formula for get the index a[(n * (j - 1) - ((j - 2) * (j - 1) / 2)) + (i - j)]

// By using row major method
void setData(arr *m, int i, int j, int x)
{
    if(i >= j)
        m->a[(i* (i + 1) / 2) + j - 1] = x;
}

int getData(arr m, int i, int j)
{
    if(i >= j)
        return m.a[(i* (i + 1) / 2) + j - 1];
    else
        return 0;
}

void display(arr m)
{
    for(int i = 1; i <= m.n; i++)
    {
        for(int j = 1; j <= m.n; j++)
        {
            if(i >= j)
                cout << m.a[(i* (i + 1) / 2) + j - 1] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct  arr m;

    cout << "Enter the diamension : ";
    cin >> m.n;
    
    m.a = new int[m.n * (m.n + 1) / 2];

    int x;

    for(int i = 1; i <= m.n; i++)
    {
        for(int j = 1; j <= m.n; j++)
        {
            cin >> x;
            setData(&m, i, j, x);
        }
    }

    cout << endl << endl;

    display(m);

}