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
   Node *t,*last;
   first=new Node;
   first->data=A[0];
   first->next=NULL;
   last=first;
   
    for(int i=1;i<n;i++)
    {
       t=new Node;
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
    }
}

void display_ll(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}



void improve(Node *ptr,int key)
{
    Node *q;

    while(ptr)
    {
       if(ptr->data==key)
       {
          q->next=ptr->next;
          ptr->next=first;
          first=ptr;
          break;
       }
       q=ptr;
       ptr=ptr->next;
    }
}

int search(Node *ptr,int key)
{
    int i=1;
    int flag=0;
    while(ptr)
    {
        if(ptr->data==key)
        {
            flag=1;
            cout<<key<<" \nFound At "<<i<<" Node"<<endl;
            break;
        }
        ptr=ptr->next;
        i++;
    }
    if(flag==0)
    {
        cout<<"Not Found"<<endl;
    }
    return flag;
}

int main()
{
    int key;
    int A[]={20,0,70,25,50,80};
    cin>>key;
    
    create_ll(A,6);
    display_ll(first);
    cout<<endl;
    cout<<"Lets Search"<<endl; 
    
    if(search(first,key))
    {
        cout<<"Lets Improve"<<endl;
        improve(first,key);
        display_ll(first);
    }
    else
    {
        cout<<"No Need Improve"<<endl;
    } 

}