#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *back;
};
Node *head=NULL;

void createDLL(int A[],int n)
{
   head=new Node;
   head->data=A[0];
   head->next=NULL;
   head->back=NULL;
   Node *current=head;

   for(int i=1;i<n;i++)
   {
     Node *temp=new Node;
     temp->data=A[i];

     current->next=temp;
     temp->back=current;
     current=temp;
     current->next=NULL;
   }
}

void Display(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<"<-->";
        ptr=ptr->next;
    }
    cout<<endl;
}

void FindPair(int k)
{
    Node *f=head;
    Node *l=head;

    //Sendind At the Back to Last Pointer
    while(l->next!=NULL)
    {
      l=l->next;
    }
    
    while(f!=l)
    {
        int sum=f->data+l->data;
        if(sum==k)
        {
            cout<<f->data<<" + "<<l->data<<endl;
            f=f->next;
            l=l->back;
        }
        else if(sum>k)
        {
           l=l->back;
        }
        else
        {
            f=f->next;
        }
    }
}

int main()
{
   int A[]={1,2,3,4,5,6};
   createDLL(A,sizeof(A)/sizeof(A[0]));

   int key=0;
   cout<<"Enter the Key !! ";
   cin>>key;
   
   Display(head);
   FindPair(key);
   Display(head);
}