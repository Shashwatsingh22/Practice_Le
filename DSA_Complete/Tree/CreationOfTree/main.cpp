#include <iostream>

using namespace std;

class Node
{
    public:
    char data;
    Node *lchild;
    Node *rchild;
};
Node *root=NULL;

class Queue
{
public:
    Queue *next;
    Node *data;
};
Queue *first=NULL;
Queue *rear=NULL;

void enqueue(Node *d)
{
   Queue *temp=new Queue;
   if(temp==NULL)
   {
       cout<<"OverFlow"<<endl;
   }
   else
   {
       temp->data=d;

       if(first==NULL){
           first=rear=temp;
           rear->next=NULL;
       }
       else
       {
           rear->next=temp;
           rear=temp;
           rear->next=NULL;
       }
   }
}

Node *dequeue()
{
   Node *x=NULL;
   if(first==NULL)
   {
       cout<<"UnderFlow"<<endl;
   }
   else
   {
   Queue *dummy=first;
   first=first->next;
   x=dummy->data;
   delete(dummy);
   }
   return x;
}

bool isEmpty()
{
    return first==NULL;
}

void lchild(Node *temp,char data)
{
    Node *ptr=new Node;
    if(ptr==NULL)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        ptr->data=data;
        ptr->lchild=ptr->rchild=NULL;
        enqueue(ptr);
        temp->lchild=ptr;
    }
}

void rchild(Node *temp,char data)
{
    Node *ptr=new Node;
    if(ptr==NULL)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        ptr->data=data;
        ptr->lchild=ptr->rchild=NULL;
        enqueue(ptr);
        temp->rchild=ptr;
    }
}


void CreatTree(char data,char side)
{
    Node *temp=new Node;
    if(temp==NULL)
    {
       cout<<" Overflow "<<endl;
    }
    else
    { 
        temp->data=data;
        temp->lchild=temp->rchild=NULL;

        if(root==NULL)
        {
            root=temp;
            enqueue(temp);
        }
        else
        {
            Node *t=dequeue();
            if(child_Complete!=0)
            {
                enqueue(t);
            }

            if(side == 'L')
            {
                lchild(t,data);
            }
            else if(side == 'R')
            {
                rchild(t,data);
            }
        }

    }
}

int main()
{
  char data,side;
  while(true)
  { 
    cout<<"Do You Wants Enter More Data (Y/N): ";
    char ch; 
    cin>>ch;
    if(ch=='Y')
    {
        cout<<"Enter the Data: ";
        cin>>data;
        cout<<"Enter At which Side: ";
        cin>>side;
        CreatTree(data,side);
    }
    else if(ch == 'N')
    {
        break;
    }
  }
}