#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
};

void insert(int d,Node *head)
{
    Node *ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }

    Node *dummy = new Node;
    dummy->data=d;
    ptr->next=dummy;
    dummy->next=NULL;
}

int search(Node *head,int d)
{
    Node *ptr=head;
    while(ptr->data!=d)
    {
        ptr=ptr->next;
    }

    if(ptr)
    {
        return ptr->data;
    }
    
    return -1;
}