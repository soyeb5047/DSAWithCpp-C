#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;

};

void create(struct stack *st)
{
    cout << "Enter the size of stack : ";
    cin >> st->size;

    st->top = -1;
    st->s = new int[st->size];
}

void push(stack *st,int ele)
{
    if(st->top == st->size-1)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        st->top++;
        st->s[st->top] = ele;
    }
}

int pop(stack *st)
{
    int x = -1;
    if(st->top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

void display(struct stack st)
{
    int i;
    for(i=st.top; i>=0; i--)
    {
        cout << st.s[i] << " ";

    }
    cout<<endl;
}

int peek(stack st,int index)
{
    int x = -1;

    if(st.top-index+1 < 0)
    {
        cout << "Invalid \n";
    }
    else{
        x = st.s[st.top-index+1];
        
    }
    return x;
}

int isEmpty(stack st)
{
    if(st.top == -1)
    {
        return -1;
    }
    return 0;
}

int isFull(stack st)
{
    if(st.top == st.size-1)
    {
        return 1;
    }
    return 0;

}

int stackTop(stack st)
{
    if(!isEmpty(st))
    {
        return st.s[st.top];
    }
    return -1;
}

int main()
{
    struct stack st;
    create(&st);

    push(&st,1);
    push(&st,2);
    push(&st,3);
    push(&st,4);
    push(&st,5);
    push(&st,6);


    // cout << pop(&st) << endl;
    // cout << pop(&st) << endl;
    // cout << pop(&st) << endl;
    // cout << pop(&st) << endl;

    cout << stackTop(st) <<endl;

    cout << peek(st,6) << endl;

    cout << isEmpty(st) << endl;

    cout << isFull(st) << "\n";

    display(st);

}
