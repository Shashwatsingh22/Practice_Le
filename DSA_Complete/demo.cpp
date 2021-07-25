#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;
}*head=NULL;

void insertion(int A[],int n)
{
    Node *cur=NULL;
    Node *temp=new Node;
    temp->data=A[0];
    temp->next=NULL;
    cur=head=temp;

    for(int i=1;i<n;i++)
    {
        Node *t=new Node;
        t->data=A[i];
        t->next=NULL;

        cur->next=t;
        cur=t;
    }   
}

void display()
{
    Node *q=head;
    while(q)
    {
        cout<<q->data<<"->";
        q=q->next;
    }
    cout<<endl;
}

void del(int key)
{
    Node *ptr=head;
    if(ptr->data==key)
    {
      head=head->next;
      delete(ptr);
    }  
    else
    {
      while(ptr->next->data!=key)
      {
        ptr=ptr->next;
      }
    cout<<ptr->data<<endl;
    Node *q=ptr->next;
    ptr->next=q->next;
    delete(q);
    }
}

int main()
{
    int size=5;
    int A[]={1,2,3,4,5};
    insertion(A,size);
    display();

    int key=1;
    del(key);
    cout<<"Updated List: ";
    display();
}