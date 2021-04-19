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
    Node *last=first;
    
    for(int i=1;i<n;i++)
    {
       Node *t =  new Node;
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
    }
}

void display(Node *ptr)
{
    while (ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int delete_node(int pos)
{
    Node *ptr = first;
    int x=-1;
    if(pos==1)
    {
        first=first->next;
        x = ptr->data;
        delete(ptr);
        return x;
    }
    
    else
    {
        Node *q=NULL;
        for(int i=1;i<pos && ptr; i++)
        {
            q=ptr;
            ptr=ptr->next;
        }
        q->next=ptr->next;
        x=ptr->data;
        delete(ptr);
        return x;
    }
    
    return x;

}

int main()
{
   int A[]={1,5,6,7,10,12,17,18,19};
   create_ll(A,9);
   cout<<"Initial: ";
   display(first);

   while (true)
   {
       char ch;
       cout<<"Enter (y/n) :";
       cin>>ch;

       if(ch=='y')
       {
           int pos;
           cout<<"pos :";
           cin>>pos;
           int num=delete_node(pos);
           if(num==-1)
           {
              cout<<"Invalid Pos Try Again "<<endl;
              continue;
           }
           else
           {
            cout<<num<<" Deleted "<<endl;
            cout<<"Updated :";
            display(first);
           }
       }
       else
       {
           break;
       }
   }
    
}