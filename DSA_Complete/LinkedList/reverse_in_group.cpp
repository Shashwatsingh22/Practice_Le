#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

node *first = NULL;

void create_ll(int A[],int n)
{
   first=new node;
   first->data=A[0];
   first->next=NULL;
   node *last=first;

   for(int i=1;i<n;i++)
   {
      node *ptr=new node;
      ptr->data=A[i];
      ptr->next=NULL;

      last->next=ptr;
      last=ptr;
   }    
}

void display(node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<endl;
}


node *ReverseWithoutUsingExtraSpace(node *front)
{
    node *mid=NULL;
    node *last=NULL;

    while(front)
    {
        last=mid;
        mid=front;
        front=front->next;

        mid->next=last;
    }
    return mid;
}

void revrseMain(node *head,int k)
{
    node *fir=head;
    node *sec=head;

    node *ptr=NULL;
    for(int i=0;i<k;i++)
    {
     ptr=sec;
     sec=sec->next;
    }
    ptr->next=NULL;
    
    fir=ReverseWithoutUsingExtraSpace(fir);
    //display(fir);
    sec=ReverseWithoutUsingExtraSpace(sec);
    //display(sec);

    ptr=fir;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=sec;
    first=fir;
}

void revrse(node *back, node *forward)
{

    if(forward)
    {
        revrse(forward,forward->next);
        forward->next=back;
    }
    else
    {
        first=back;
    }
}

int main()
{
    //int a[]={1,2,3,4,5,6,7,8,9,10};
    int a[]={5 ,9 ,9 ,3 ,5 ,6 ,6 ,2 ,8 ,2};
    int size=sizeof(a)/sizeof(a[0]);

    create_ll(a,size);
    display(first);

    revrseMain(first,2);
    display(first);  
}