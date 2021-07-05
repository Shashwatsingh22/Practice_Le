#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *lchild;
    Node *rchild;
}*root=NULL;

void CreationOfTree(int key)
{
 //Creation OF noDE     
    Node *temp=NULL;
    temp=new Node;
    temp->data=key;
    temp->lchild=temp->rchild=NULL;

    if(root==NULL)
    {
      root=temp;
      return;
    }
     
    Node *ptr=root, *tail=NULL; 
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
    return;
}

int Height(Node *ptr)
{
    int left,right;

    if(ptr==NULL)
    {
        return 0;
    }
    else
    {
       left=Height(ptr->lchild);
       right=Height(ptr->rchild);

       if(left<=right)
       {
           return right+1;
       }    
       else
       {
           return left+1;
       }
    }
}



Node *Search(int key)
{
    Node *temp=root;
    if(temp==NULL)
    {
        return NULL;
    }

    else
    {
        while(temp!=NULL)
        {
           if(temp->data>key)
           {
               temp=temp->lchild;
           }
           else if(temp->data<key)
           {
               temp=temp->rchild;
           }
           else
           {
               return temp;
           }
        }
    }
}

Node *InPre(Node *ptr)
{
    while(ptr!=NULL && ptr->rchild!=NULL)
    {
        ptr=ptr->rchild;
    }
    return ptr;
}

Node *InSucc(Node *ptr)
{
    while(ptr!=NULL && ptr->lchild!=NULL)
    {
        ptr=ptr->lchild;
    }
    return ptr;
}

Node *Delete(Node *ptr,int key)
{
   
   if(ptr==NULL)  //When Given Pointer is NULL
   {
       return NULL;
   }
   
   else if(ptr->lchild==NULL && ptr->rchild==NULL) //When we get to the leaf Node
   {
     if(ptr==root) // Assuring that Node is ROot or NOT
     {
        root=NULL;
     }
     delete(ptr);
     return NULL;
   }

   else if(key>ptr->data)
   {
     ptr->rchild=Delete(ptr->rchild,key);
   }

   else if(key<ptr->data)
   {
       ptr->lchild=Delete(ptr->lchild,key);
   }

   else
   {

//We are choosing the Height Which greater becoz might be the some can become 0 so we unable find the 
// suitable data for the root that subtree.

// Greatest Side is Left --> Left
// Greatest Side is Right --> Right

       if(Height(ptr->lchild) > Height(ptr->rchild))  
       {
           Node *var=InorderPred(ptr->lchild)
           ptr->data=var->data;
           ptr->lchild=Delete(ptr->lchild,var->data);
       }
       else
       {
           Node *var=InorderSucc(ptr->rchild);
           ptr->data=var->data;
           ptr->rchild=Delete(ptr->rchild,var->data);
       }

       return ptr;
   }

}

int main()
{

}