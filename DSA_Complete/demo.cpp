#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *first=NULL;
Node *last=NULL;

void create_ll(int d)
{
    Node *t=new Node;
    t->data=d;
    t->next=NULL;

    if(first==NULL)
    {
        first=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
    return;
}

void insert(Node *ptr,int val, int index)
{
    int i=1;
    
    Node *t=new Node;
    t->data=val;
    t->next=NULL;
     
    if(index==1)
    {
        t->next=first;
        first=t;
    }
    
   else{
    while(ptr)
    {
        if(i==index-1)
        {
          t->next=ptr->next;
          ptr->next=t;
          break;
        }
        ptr=ptr->next;
        i++;
    }
   }
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


int display_ll(Node *ptr)
{
    int len=0;
    while(ptr)
    {
        len+=1;
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<endl;
    return len;
}

int main()
{
    cout<<"---------Menu Driven Program for Singly LL----------"<<endl;
    while(true)
   {
    int j=1;
    cout<<"1. Create \n2. Insert \n3. Deletion \n4. Display\n5. Length \n6. Exit"<<endl;
    int choice=0;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
         int num;
         cout<<"Enter Number Elements You Wants to Insert: ";
         cin>>num;
         while(num--)
         {
                int data;
                cin>>data;
                create_ll(data);
         }
        cout<<"Created List "<<endl;
        display_ll(first);
        cout<<endl;
        }
        break;

    case 2:
     {
        int data,pos;
        cout<<"Enter the Data : "<<endl;
        cin>>data;
        cout<<"Position :"<<endl;
        cin>>pos;
        insert(first,data,pos);
        cout<<"Updated List : ";
        display_ll(first);
        cout<<endl;
    }
        break;    
    
    case 3:
        {
         int pos;
         cout<<"Enter Position :";
         cin>>pos;
         cout<<delete_node(pos)<<" is Deleted."<<endl;
         cout<<"Updated List : ";
        display_ll(first);
        cout<<endl;
         
        }
        break;

    case 4:
        cout<<"LL: ";
        display_ll(first);
        break;

    case 5:
        cout<<"Current length: "<<display_ll(first)<<endl;
        break; 

    default:
        cout<<"LogOut"<<endl;
        j=0;
        break;
    }
    if(j==0)
    {
        break;
    }
   }
}