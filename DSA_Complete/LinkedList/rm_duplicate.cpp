#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *first=NULL;

void create_ll(int A[],int n)
{
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    Node *last =first;

    for(int i=1;i<n;i++)
    {
        Node *temp = new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void display(Node *ptr)
{
   while(ptr)
   {
       cout<<ptr->data<<" -> ";
       ptr=ptr->next;
   }
   cout<<endl;
}

void rmDuplicate(Node *ptr)
{
    Node *q=first->next;
    while(q)
    {
        if(ptr->data==q->data)
        {
           ptr->next=q->next;
           delete(q);
           q=ptr->next;
        }
        else{
        ptr=q;
        q=q->next;}
    }
}

int main()
{
    int A[]={1,1,2,2,2,3,3,3,3,4};
    create_ll(A,10);
    display(first);

    rmDuplicate(first);
    display(first);
}