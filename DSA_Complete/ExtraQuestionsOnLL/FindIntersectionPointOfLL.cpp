#include<iostream>
using namespace std;

class Stack
{
    public:
    int top;
    int *A;
    int size;
};

void push(Stack *st,int data)
{
    if(st->top==st->size-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else 
    {
        st->top++;
        st->A[st->top]=data;
    }
}

int pop(Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        x=st->A[st->top];
        st->top--;
    }
    return x;
}

int topElement(Stack st)
{
    return st.A[st.top];
}

int MergePointOfLinkedList(Node *first,Node *second)
{
    Node *n=first;
    Stack ns1,ns2;
    while(n){
        push(&ns1,n);
        n=n->next;
    }
    n=second;
    while(n)
    {
        push(&ns2,n);
        n=n->next;
    }

    while(topElement(ns1)==topElement(ns2))
    {
        n=pop(&ns1);
        pop(&ns2);
    }
    return n->data;
}