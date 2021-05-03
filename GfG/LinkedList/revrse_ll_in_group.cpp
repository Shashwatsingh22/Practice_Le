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


node *ReverseWithoutUsingExtraSpace(node *front,node *end)
{
    node *mid=NULL;
    node *last=NULL;

    while(front!=end)
    {
        last=mid;
        mid=front;
        front=front->next;

        mid->next=last;
    }
    return mid;
}



node *revrseMain(node *head,int k)
{
      node *ptr=head;
      node *qtr=NULL;
      node *prev=NULL;  
      while(ptr)
      {
         node *start=ptr;
         node *end=ptr;
         node *q=ptr;

         for(int i=0;i<k;i++)
         {
             ptr=ptr->next;
             q=q->next;
         }
         end=ptr;
         prev=ReverseWithoutUsingExtraSpace(start,end);
         while(prev->next!=NULL)
         {
             prev=prev->next;
         }
         qtr=ptr;
         for(int i=0;i<k;i++)
         {
             qtr=qtr->next;
         }
         prev->next=qtr;
      }
   return qtr;
}

int main()
{
    //int a[]={1,2,3,4,5,6,7,8,9,10};
    int a[]={5 ,9 ,9 ,3 ,5 ,6 ,6 ,2 ,8 ,2};
    int size=sizeof(a)/sizeof(a[0]);

    create_ll(a,size);
    display(first);

    first=revrseMain(first,2);
    display(first);  
}