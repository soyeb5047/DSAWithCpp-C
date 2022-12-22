#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Stack{
    Node *top;
    public:
    Stack(){
        top=NULL;
    }

    void push(int data);
    int pop();
    void Display();
};


void Stack::push(int data)
{
    Node *t = new Node;
    if(t==NULL){
        cout<<"Overflow\n";
        return;
    }

    t->data = data;
    t->next = top;
    top = t;
    
}

int Stack::pop()
{
    Node *t = new Node;
    
    int x =-1;
    if(top==NULL)
    {
        cout<<"Underflow";
    }
    else{
        x = top->data;
        t = top;
        top = top->next;
        delete(t);

    }

    return x;
}

void Stack::Display()
{
    Node *t = top;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}



int main()
{
    
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.Display();
    st.pop();
    st.Display();

}