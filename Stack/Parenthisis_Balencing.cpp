#include<iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void push(char val)
{
    Node *t = new Node;

    if(t == NULL)
    {
        cout << " stack Overflow\n";
    }

    else{
        t->data = val;
        t->next = top;
        top = t;
    }

}

char pop()
{
    struct Node *t = NULL;
    char x = 0;

    if(top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else{
        t = top;
        x = top->data;
        top = top->next;
        free(t);
    }
    return x;
}

void display()
{
    Node *t = top;

    while(t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }cout << endl;
}

int isEmpty()
{
    Node *t = NULL;

    if(top == NULL)
    {
        return 1;
    }
    return 0;
}

int balancing(char *exp)
{
    for(int i=0; exp[i]!='\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[' )
        {
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(isEmpty())
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    return isEmpty() ? 1:0;
}

int main()
{
    char exp[] = "[((a+b)*(a-b))]";

    cout << balancing(exp) << endl;
}