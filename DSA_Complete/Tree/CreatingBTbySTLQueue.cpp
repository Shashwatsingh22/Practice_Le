#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class Node
{
    public:

    Node *lchild;
    Node *rchild;
    int Data;
};

Node *root = NULL;

void createBT()
{
   Node *ptr=NULL;
   int x;
  
  queue <Node*>  q;
  cout<<"Enter the root Value: ";
  cin>>x;
  
  root= new Node;
  root->Data=x;
  //cout<<root->Data<<endl;

  q.push(root);
  root->lchild=root->rchild=NULL;
  //cout<<q.front()<<endl;

  while(!q.empty())
  {
      Node *temp=NULL;
      
      ptr=q.front();
      q.pop();
      
      cout<<"Enter the lchild of "<<ptr->Data<<endl;
      cin>>x;

      if(x!=-1)
      {
        temp = new Node;  
        temp->Data=x;
        temp->lchild=temp->rchild=NULL;
        ptr->lchild=temp;
        q.push(ptr->lchild);
      }

      cout<<"Enter the Rchild of "<<ptr->Data<<endl;
      cin>>x;
      if(x!=-1)
      {
        temp = new Node;
        temp->Data=x;
        temp->lchild=temp->rchild=NULL;
        ptr->rchild=temp;
        q.push(ptr->rchild);    
      }
      
  }
}

void preorder(Node *ptr)
{
    if(ptr)
    {
        cout<<ptr->Data<<" ";
        preorder(ptr->lchild);
        preorder(ptr->rchild);
    }
    
}

void itrPre(Node *ptr)
{
    stack<Node*> st;

    while(ptr || !st.empty())
    {
        if(ptr)
        {
             cout<<ptr->Data<<" ";
             st.push(ptr);
             ptr=ptr->lchild;
        }
        else
        {
            ptr=st.top();
            st.pop();
            ptr=ptr->rchild;
        }
        
    }
}

void Inorder(Node *ptr)
{
    if(ptr)
    {
        Inorder(ptr->lchild);
        cout<<ptr->Data<<" ";
        Inorder(ptr->rchild);
    }
}

void itrIn(Node *ptr)
{
    stack <Node *> st;
   
    while(ptr || !st.empty())
    {
        if(ptr)
        {
            st.push(ptr);
            ptr=ptr->lchild;
        }
        else
        {
            ptr=st.top();
            st.pop();
            cout<<ptr->Data<<" ";
            ptr=ptr->lchild;
        }
    }
}

void postOrder(Node *ptr)
{
    if(ptr)
    {
        postOrder(ptr->lchild);
        postOrder(ptr->rchild);
        cout<<ptr->Data<<" ";
    }
}

// void itrPost(Node *ptr)
// {
//     stack<long int> st;

//     long int temp;
    
//     while(ptr || !st.empty())
//     {
//         if(ptr)
//         {
//             temp = (long int)ptr;
//             st.push(temp);
//             ptr=ptr->lchild;
//         }
//         else
//         {
//             temp=st.top();
//             st.pop();

//             if(temp>0)
//             {
//                 st.push(-temp);
//                 ptr=((Node*)temp)->rchild;
//             }
//             else
//             {
//                 cout<<((Node*)temp)->Data<<" ";
//                 temp=NULL;
//             }
//         }

//     }
// }

void levelOrder(Node *ptr)
{
   queue <Node*> q;
   
   cout<<ptr->Data<<" ";
   q.push(ptr);

   while(!q.empty())
   {
       ptr=q.front();
       q.pop();
       
       if(ptr->lchild)
       {
       cout<<ptr->lchild->Data<<" ";
       q.push(ptr->lchild);
       }

       if(ptr->rchild)
       {
       cout<<ptr->rchild->Data<<" ";
       q.push(ptr->rchild);
       }
   }
}

int main()
{
 createBT();

 cout<<" PreOrder "<<endl;
 preorder(root);
 cout<<endl;
 itrPre(root);

 cout<<endl<<"Inorder "<<endl;
 Inorder(root);
 cout<<endl;
 itrIn(root);

 cout<<endl<<"Postorder "<<endl;
  postOrder(root);
  cout<<endl;
  //itrPost(root);

  cout<<endl<<"Level Order"<<endl;
  levelOrder(root);
}