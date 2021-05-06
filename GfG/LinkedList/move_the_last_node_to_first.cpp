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

void Move_last_to_first(node *ptr)
{
    node *qtr=NULL;

    while(ptr->next!=NULL)
    {
        qtr=ptr;
        ptr=ptr->next;
    }
    qtr->next=NULL;
    ptr->next=first;
    first=ptr;
}



int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);

    create_ll(a,size);
    display(first);

    Move_last_to_first(first);
    
    display(first);
}