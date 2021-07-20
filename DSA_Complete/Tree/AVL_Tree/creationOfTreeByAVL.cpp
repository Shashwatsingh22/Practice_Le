#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    int height;
    Node *lchild;
    Node *rchild;
}*root=NULL;

int NodeHeight(Node *ptr)
{
    int lh,rh;
    lh = ptr && ptr->lchild ?  ptr->lchild->height : 0;
    rh = ptr && ptr->rchild ? ptr->rchild->height :0;

    return lh>rh?lh+1:rh+1; 
}

int BalanceFactor(Node *ptr)
{
    int lh,rh;
    lh = ptr && ptr->lchild ?  ptr->lchild->height : 0;
    rh = ptr && ptr->rchild ? ptr->rchild->height :0;

    return lh-rh;    
}

Node *recInsert(Node *ptr,int key)
{
    Node *temp=NULL;

    if(ptr==NULL)
    {
        temp= new Node;
        temp->data=key;
        temp->height=1;
        temp->lchild=temp->rchild=NULL;
        return temp;
    }

    else if(key<ptr->data)
    {
        ptr->lchild=recInsert(ptr->lchild,key);
    }
    else if(key>ptr->data)
    {
        ptr->rchild=recInsert(ptr->rchild,key);
    }
    
    ptr->height=NodeHeight(ptr);

    if(BalanceFact(ptr)==2 && BalanceFactor(ptr->lchild)==1)
    {
        return LLRotation(ptr);
    }
    else if(BalanceFactor(ptr)==2 && BalanceFactor(ptr->lchild)==-1)
    {
        return LRRotation(ptr);
    }
    else if(BalanceFactor(ptr)==-2 && BalanceFactor(ptr->rchild==1))
    {
        return RLRotation(ptr);
    }
    else
    {
        return RRRotation(ptr);
    }
    return ptr;
}


int main()
{

}