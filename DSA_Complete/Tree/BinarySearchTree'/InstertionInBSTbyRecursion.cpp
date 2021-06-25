#include<iostream>
using namespace std;

class treeNode
{
    public:
    int data;
    treeNode *lchild;
    treeNode *rchild;
}*root=NULL;

treeNode *CreateBST(treeNode *ptr,int key)
{
    treeNode *temp=new treeNode;
    temp->data=key;
    temp->lchild=temp->rchild=NULL; 

    if(ptr==NULL)
    {
        ptr=temp;
        return temp;
    }

    else
    {
        if(ptr->data>key)
        {
            ptr->lchild=CreateBST(ptr->lchild,key);
        }
        else if(ptr->data<key)
        {
           ptr->rchild=CreateBST(ptr->rchild,key);
        }
    }
    return ptr;
}

void Inorder(treeNode *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        Inorder(ptr->lchild);
        cout<<ptr->data<<" ";
        Inorder(ptr->rchild);
    }
}

int main()
{
   cout<<"Lets Create BST "<<endl;

   cout<<"Enter the Size of the Array to Insert data in BST : ";
   int n;
   cin>>n;

   int Arr[n]={0};

   cout<<"Give the Datas :";
   for(int i=0;i<n;i++)
   {
       cin>>Arr[i];
   }

   cout<<"Lets Insert the Datas to BST  from Array :"<<endl;
   
   cout<<"Instering to BST =>" << Arr[0];
   root=CreateBST(root,Arr[0]);

   for(int i=1;i<n;i++)
   {
      cout<<"Inserting to BST => "<<Arr[i];
      CreateBST(root,Arr[i]);
      cout<<endl;    
   }
   
   cout<< "Inorder of BST => ";
   Inorder(root);

}