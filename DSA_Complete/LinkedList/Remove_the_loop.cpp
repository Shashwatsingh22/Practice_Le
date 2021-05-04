#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
};
Node *first = NULL;

void create_ll(int A[], int n)
{
   first = new Node;
   first->data=A[0];
   first->next=NULL;
   Node *current = first;

   for(int i=1;i<n;i++)
   {
   
     Node *ptr=new Node;
     ptr->data=A[i];
     ptr->next=NULL;

     current->next=ptr;
     current=ptr;
   }
}

void Display(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<endl;
}

void RemoveLoop(Node *ptr,Node *qtr)
{
   while(ptr->next!=qtr->next)
   {
       ptr=ptr->next;
       qtr=qtr->next;
   }
   qtr->next=NULL;
   
}

bool isLoop()
{
  Node *head=first;
  Node *tail=first;

  do
    {
    tail=tail->next;
    if(tail==NULL)
    {
      return false;
    }
    head=head->next;
    if(head!=NULL)
    {
     head=head->next;
    }

    }
    while(head && tail && head!=tail);
   
   if(head==tail)
   {
      RemoveLoop(first,tail);
      return true;
   }
   else
   {
       return false;
   }

}


int main()
{
    int A[]={1,2,3,4,5};
    //int A[]={1};
    create_ll(A,sizeof(A)/sizeof(A[0]));
    Node *t1,*t2;

    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;

    if(isLoop())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    Display(first);
}