#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev ,*next;
};

Node *first=NULL;

void create(int A[],int n)
{
    first=new Node;
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;

    Node *ptr=first;

    for(int i=1;i<n;i++)
    {
        Node *temp=new Node;
        temp->data=A[i];
        temp->prev=ptr;
        temp->next=NULL;
        ptr->next=temp;
        ptr=temp;
    }
}

void Display()
{
    Node *ptr=first;
    while(ptr)
    {
        cout<<"<-"<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<endl;
}

void insert(int pos,int data)
{
    Node *ptr=new Node;
    ptr->data=data;

    if(pos==1)
    {
      ptr->prev=NULL;
      ptr->next=first;
      first->prev=ptr;
      first=first->prev;
    }

    else
    {
        Node *q=first;
        for(int i=0;i<pos-2;i++)
        {
            q=q->next;
        }
        if(q!=NULL)
        {
          ptr->next=q->next;
          q->next->prev=ptr;
          ptr->prev=q;
          q->next=ptr;
        }
        else
        {
            cout<<"Invalid Position !!" <<endl;
        }
    }
}

int main()
{
   int A[]={1,2,3,4,5};
   int n=sizeof(A)/sizeof(A[0]);
   create(A,n);
   Display();
   
   insert(1,5);
   Display();

}