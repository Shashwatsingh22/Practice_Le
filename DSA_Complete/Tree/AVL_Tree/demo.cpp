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
Node *RRRotation(Node *p)
{
    Node *pr=p->rchild;
    Node *prl=pr->lchild;
    cout<<p->data<<" "<<pr->data<<" "<<prl->data<<endl; 
    pr->lchild=p;
    //cout<<p->data;
    p->rchild=prl;
    //cout<<plr->data;
    p->height=NodeHeight(p);
    pr->height=NodeHeight(pr);
	if(p==root)
    {
        root=pr;
        //cout<<pl->data<<" ";
    }
    return pr;
}
Node *LLRotation(Node *p)
{
    Node *pl=p->lchild;
    Node *plr=pl->rchild;
    cout<<p->data<<" "<<pl->data<<" "<<plr->data<<endl; 
    pl->rchild=p;
    //cout<<p->data;
    p->lchild=plr;
    //cout<<plr->data;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
	if(p==root)
    {
        root=pl;
        //cout<<pl->data<<" ";
    }
    return pl;
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
    if(BalanceFactor(ptr)==2 && BalanceFactor(ptr->lchild)==1)
    {
        cout<<"LLRotation "<<key<<endl;
        return LLRotation(ptr);
    }
    else if(BalanceFactor(ptr)==2 && BalanceFactor(ptr->lchild)==-1)
    {
        //return LRRotation(ptr);
    }
    else if(BalanceFactor(ptr)==-2 && BalanceFactor(ptr->rchild)==1)
    {
        //return RLRotation(ptr);
    }
    else if(BalanceFactor(ptr)==-2 && BalanceFactor(ptr->rchild)==-1)
    {
    	cout<<"RRRotation "<<key<<endl;
        return RRRotation(ptr);
    }
    return ptr;
}
void InOrder(Node *ptr)
{
    if(ptr!=NULL)
    {
        InOrder(ptr->lchild);
        cout<<ptr->data<<"   ";
        InOrder(ptr->rchild);
    }
}
int main()
{
   root=recInsert(root,10);
   recInsert(root,12);
   recInsert(root,5);
   recInsert(root,2);
   recInsert(root,6);
   recInsert(root,4);
   InOrder(root);
}