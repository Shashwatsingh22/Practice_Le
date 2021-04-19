#include<iostream>
using namespace std;

//It take O(1) becoz we are inserting an element from the last and also that last pointer is updating its 
// address . . . .

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
}

void display_ll(Node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
}

int main()
{
    int num;
    cin>>num;
    while(num)
    {
        int data;
        cin>>data;
        create_ll(data);
        num--;
    }

    display_ll(first);
}