#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first =NULL;

void create_ll(int A[],int n)
{
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    Node *last=first;

    for(int i=1;i<n;i++)
    {
        Node *t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<endl;
}

bool isSorted(Node *ptr)
{
    int x=0;
    x=ptr->data;
    ptr=ptr->next;
    while(ptr)
    { 
       if(ptr->data>x)
       {
           ptr=ptr->next;
           continue;
       }
       else
       {
           return false;
       }
       
    }
    return true;
}

int main()
{
    int A[]={100,10,15,20,25,30,35,40,45,50};
    create_ll(A,10);
    display(first);

    if(isSorted(first))
    {
        cout<<"Its Sorted "<<endl;
    }
    else
    {
        cout<<"Not Sorted "<<endl;
    }
}