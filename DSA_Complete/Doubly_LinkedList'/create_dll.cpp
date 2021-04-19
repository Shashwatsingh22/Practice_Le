#include<iostream>
using namespace std;

class Node
{
    public:
    Node *back;
    int data;
    Node *next;
};

Node *first=NULL;

void create_dll(int A[],int n)
{
     first=new Node;
     first->back=NULL;
     first->data=A[0];
     first->next=NULL;

     Node *current_ptr=first;

     for(int i=1;i<n;i++)
     {
         Node *temp=new Node;
         temp->data=A[i];

         temp->back=current_ptr;
         temp->next=NULL;
         current_ptr->next=temp;
         current_ptr=temp;
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
}


int main()
{
    int A[]={1,2,3,4,5};
    int n ;
    n= sizeof(A)/sizeof(A[0]);
    create_dll(A,n);
    Display();
}