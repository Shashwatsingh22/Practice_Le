#include <iostream>

using namespace std;

class Node
{
    public:
    char data;
    Node *lchild;
    Node *rchild;
};
Node *root=NULL;

class Queue
{
public:
    Queue *next;
    Node *data;
};
Queue *first=NULL;
Queue *rear=NULL;

void enqueue(Node *d)
{
   Queue *temp=new Queue;
   if(temp==NULL)
   {
       cout<<"OverFlow"<<endl;
   }
   else
   {
       temp->data=d;

       if(first==NULL){
           first=rear=temp;
           rear->next=NULL;
       }
       else
       {
           rear->next=temp;
           rear=temp;
           rear->next=NULL;
       }
   }
}

Node *dequeue()
{
   Node *x=NULL;
   if(first==NULL)
   {
       cout<<"UnderFlow"<<endl;
   }
   else
   {
   Queue *dummy=first;
   first=first->next;
   x=dummy->data;
   delete(dummy);
   }
   return x;
}

bool isEmpty()
{
    return first==NULL;
}

void preorder(Node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        preorder(ptr->lchild);
        preorder(ptr->rchild);
    }
}

void postorder(Node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->lchild);
        postorder(ptr->rchild);
        cout<<ptr->data;
    }
}

void inorder(Node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->lchild);
        cout<<ptr->data;
        inorder(ptr->rchild);
    }
}



void QDisplay()
{
    Queue *ptr = first;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
  char data,side;
  while(true)
  { 
    cout<<"Do You Wants Enter More Data (Y/N): ";
    char ch; 
    cin>>ch;
    if(ch=='Y')
    {
        if(root==NULL)
        {
            Node *temp=new Node;
            if(temp==NULL)
            {
                cout<<"OverFlow";
                return 0;
            }
            else
            {
                cout<<"Enter The Data For the Root Node : ";
                cin>>temp->data;
                temp->lchild=temp->rchild=NULL;
                root=temp;
                enqueue(temp);
                cout<<"Queue Updata: ";
                QDisplay();
            }    
        }
        else
        {
            Node *t=dequeue();
            char ch;
            cout<<"Do you want to enter the Data at the Lside (of "<< t->data << "): (Y/N): ";
            cin>>ch;

            //Left Child Insertion
            if(ch=='Y')
            {
               Node *temp=new Node;
               if(temp==NULL)
               {
                   cout<<"Overflow"<<endl;
                   return 0;
               }
               else{
               cout<<"Enter the Left Child Data: (of "<< t->data <<") ";
               cin>>temp->data;
               temp->lchild=temp->rchild=NULL;
               t->lchild=temp;
               enqueue(temp);
               cout<<"Queue Update: ";
               QDisplay();
               }
            }
           
            //Right Child Insertion
            cout<<"Do you wants to enter the Data at the Rside: ( of "<< t->data <<") (Y/N): ";
            cin>>ch;
            if(ch=='Y')
            {
              Node *temp =new Node;
              if(temp==NULL)
              {
                  cout<<"Overflow"<<endl;
                  return 0;
              }
              else
              {
               cout<<"Enter the Right Child Data: (of "<< t->data <<") ";
               cin>>temp->data;
               temp->lchild=temp->rchild=NULL;
               t->rchild=temp;
               enqueue(temp);
               cout<<"Queue Update: ";
               QDisplay();
              }
            }

        }

    }
    else if(ch == 'N')
    {
        break;
    }
  }
   
  cout<<"Choose the Order Which You Wants To See : "<<endl;
  cout<<"1. Pre-Order\n2. Post-Order\n3. InOrder";
  int cho;
  cin>>cho;
  switch (cho)
  {
  case 1:
      {
        cout<<"PreOrder Of This Tree"<<endl;
        preorder(root);
      }
      break;
  case 2:
  {
      cout<<"PostOrder of this tree"<<endl;
      postorder(root);
  }
  break;
  case 3:
  {
      cout<<"InOrder Of this tree"<<endl;
      inorder(root);
  }
  default:
      cout<<"Wrong Input"<<endl;
      break;
  } 
  
  return 0;
}