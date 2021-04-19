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
    Node *last;
    first= new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        Node *ptr = new Node;
        ptr->data=A[i];
        ptr->next=NULL;
        last->next=ptr;
        last=ptr;
    }
}

void insert_at_sorted_postion(int data)
{
    Node *t,*p,*q;
    t=new Node;

    t->data=data;
    t->next=NULL;
    
    p=first;
    q=NULL;

    if(first==NULL)
    {
        first=t;
        p=first;
    }

    else if(first->data>data)
    {
        t->next=first;
        first=t;
        p=first;
    }    

    else{
    do
    {
         if(p->next==NULL)
         {
             q->next->next=t;
             t->next=NULL;
             break;
         }

        else if(p->data>data)
        {
            q->next=t;
            t->next=p;
            break;      
        }
        q=p;
        p=p->next;

    }while(p);
}
}

void display_ll(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{ 
    int A[]={1,2,3,5,6};
    create_ll(A,5);
    cout<<"Intial "<<endl;
    display_ll(first);
    
    while(true)
    {
    char ch;
    cout<<"Enter the Data Which You Wants To Insert (y/n) : ";
    cin>>ch;
    if(ch=='y')
    {
    int data;
    cin>>data;
    insert_at_sorted_postion(data);
    cout<<"Final LL is :"<<endl;
    display_ll(first);
    }
    else
    {
        break;
    }
    
    }

}