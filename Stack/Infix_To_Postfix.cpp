#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(char val)
{
    Node *t = new Node;

    if (t == NULL)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        t->data = val;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t = NULL;
    char x = 0;

    if (top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        t = top;
        x = top->data;
        top = top->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int precedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/' || x == '%')
        return 2;

    return 0;
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')
        return 0;
    else
        return 1;
}

char *convert(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len+1) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else if (precedence(infix[i]) > precedence(top->data))
            push(infix[i++]);
        else
            postfix[j++] = pop();
    }

    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char infix[] = "a+b*c-d/e";
    push(' ');
    char *postfix = convert(infix);

    cout << postfix << endl;
}