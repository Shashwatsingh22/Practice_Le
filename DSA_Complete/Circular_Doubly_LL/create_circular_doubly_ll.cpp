#include<iostream>
using namespace std;

class Node
{
   public:
   Node *prev;
   Node *next;
   int data;
};

Node *head=NULL;

void create_c_dll(int A[],int n)
{
    head=new Node;
    head->data=A[0];
    head->prev=head;
    head->next=head;

    Node *current=head;

    for(int i=1;i<n;i++)
    {
        Node *temp=new Node;
        temp->data=A[i];
        current->next=temp;
        
        temp->next=head;
        temp->prev=current;
        current=temp;
    }
}


void Display(Node *ptr)
{
    do
    {
        cout<<ptr->data<<"<->";
        ptr=ptr->next;
    }while(ptr!=head);
}

void Display1(Node *ptr)
{
    int flag=0;
    while(ptr!=head || flag==0)
    {
      flag=1;
      cout<<ptr->data<<"<->";
      ptr=ptr->next;
    }
}

void Display2(Node *ptr)
{
    static int flag=0;
    if(ptr!=head || flag==0)
    {
      flag=1;
      cout<<ptr->data<<"<->";
      Display2(ptr->next);
    }
    flag=0;
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8};

    create_c_dll(A,sizeof(A)/sizeof(A[0]));

    Display2(head);
} 