#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;
};

Node *first=NULL;

void create(int A[],int n)
{
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    Node *last=first;

    for(int i=1;i<n;i++)
    {
        Node *temp=new Node;
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
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<endl;
}

int isSorted(Node *ptr)
{
    int temp=ptr->data;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        
        if(ptr->data > temp)
        {
            temp=ptr->data;
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);

    create(A,size);

     display(first);
     int x=isSorted(first);
     cout<<x;
    if(x)
    {
        cout<<"The LL is Sorted !!";
    }
    else
    {
        cout<<"Not Sorted !!"; 
    }
    display(first);
}