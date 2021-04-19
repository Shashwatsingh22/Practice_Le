#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};


Node  *create_ll(Node *ptr,int A[], int n)
{
    ptr=new Node;
    ptr->data=A[0];
    ptr->next=NULL;
    Node *current = ptr;

    for(int i=1;i<n;i++)
    {
        Node *temp=new Node;
        temp->data=A[i];
        temp->next=NULL;

         current->next=temp;
         current=temp;
    }

    return ptr;

}

void Display(Node *ptr)
{
     while(ptr!=NULL)
     {
         cout<<ptr->data<<"->";
         ptr=ptr->next;
     }
     cout<<endl;
}

Node *Merging_of_two_ll(Node *fst,Node *snd)
{
    Node *third=NULL;
    Node *ptr=NULL;
    
    if(fst->data<snd->data)
    {
        ptr=fst;
        third=fst;
        fst=fst->next;
    }
    else
    {
        ptr=snd;
        third=snd;
        snd=snd->next;
    }

    while(fst!=NULL && snd!=NULL)
    {
       if(fst->data<snd->data)
       {
           ptr->next=fst;
           ptr=fst;
           fst=fst->next;
       }
       else
       {
           ptr->next=snd;
           ptr=snd;
           snd=snd->next;
       }
    }

    if(fst!=NULL)
    {
        ptr->next=fst;
    }
    else
    {
        ptr->next=snd;
    }
    return third;

}

int main()
{
    int A[]={1,3,6,8};
    Node *first=NULL;

    first=create_ll(first,A,sizeof(A)/sizeof(A[0]));

    int B[]={2,4,5,7,9,10,11,12};
    Node *second=NULL;

    second=create_ll(second,B,sizeof(B)/sizeof(B[0]));

   cout<<"A LL :";
   Display(first);

   cout<<"B ll: ";
   Display(second);

   cout<<"After Merging :";
   Node *third=NULL;
   third=Merging_of_two_ll(first,second);
   Display(third);

}