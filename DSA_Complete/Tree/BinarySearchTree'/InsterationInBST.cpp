#include<iostream>
using namespace std;

void insert(treeNode *ptr,int key)
{
    treeNode *tail=NULL,*temp;

    //Node Creation Steps
    temp=new treeNode;
    temp->data=key;
    temp->lchild=temp->rchild=NULL;

    if(ptr==NULL)
    {
        ptr=temp;
        return;
    }

    while(ptr!=NULL)
    {
        tail=ptr;
        if(ptr->data>key)
        {
          ptr=ptr->lchild;
        }
        else if(ptr->data<key)
        {
            ptr=ptr->rchild;
        }
        else
        {
           return;
        }
    }

    if(tail->data>key)
    {
        tail->lchild=temp;
    }
    else
    {
        tail->rchild=temp;
    }
}

int main()
{

}