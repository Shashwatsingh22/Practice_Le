#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
};

struct Node *Creat_LL(struct Node *first,int A[],int n)
{
   //Last Pointer Will Help me to join any new element at the last;
   //temp ptr help me to build the next node
    struct Node *temp,*last;

    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    return first;
}

void Display_LL(struct Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
}


int main()
{
    struct Node *first=NULL;
    int A[]={1,2,3,4,5,6};
    //cout<<sizeof(A)/sizeof(A[0]);
    first=Creat_LL(first,A,sizeof(A)/sizeof(A[0]));
    Display_LL(first);
}