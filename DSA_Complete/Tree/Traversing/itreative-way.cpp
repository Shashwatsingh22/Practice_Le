#include<iostream>
using namespace std;

class treeNode
{
    public:
    int data;
    treeNode *lChild;
    treeNode *rChild;
}*root=NULL;

class Queue
{
    public:
    treeNode *data;
    Queue *next;
}*first=NULL,*rear=NULL;

void Enqueue(treeNode *add)
{
    Queue *temp = new Queue;
    if(temp == NULL)
    {
      cout<<"OverFlow"<<endl;
      return;
    }
    else
    {
        temp->data=add;
        temp->next=NULL;
        if(first==NULL)
        {
            first=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear = temp;
        }
    }
}

treeNode *Dequeue()
{
    treeNode *retAdd=NULL;
    if(first==NULL)
    {
        cout<<"UnderFlow"<<endl;
        return retAdd;
    }
    else
    {
        Queue *t=first;
        first=first->next;
        retAdd = t->data;
        delete(t);
    }
    return retAdd;
}

class Stack
{
    public:
    treeNode *data;
    Stack *next;
}*top=NULL;

void push(treeNode *add)
{
    Stack *Node = new Stack;
    if(Node == NULL)
    { 
       cout<<"Overflow"<<endl;
       return;
    }
    else
    {
        Node->data=add;
        Node->next=top;
        top=Node;
    }
}

bool isEmptyStack()
{
   return top==NULL;
}

treeNode *pop()
{
    treeNode *retAdd=NULL;
    if(top==NULL)
    {
        cout<<"Underflow"<<endl;
        return retAdd;
    }
    else
    {
         Stack *ptr=top;
         top=top->next;
         retAdd = ptr->data;
         delete(ptr);
    }
    return retAdd;
}

/*void preOrder(treeNode *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        while(ptr!=NULL || isEmptyStack()!=true)
        {
            if(ptr!=NULL)
            {
                cout<<ptr->data;
                push(ptr);
                ptr=ptr->lChild;
            }
            else
            {
                ptr=pop();
                ptr=ptr->rChild;
            }
        }
    }
}*/

void PreOrder(treeNode *t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        cout<<t->data<<" ";
        PreOrder(t->lChild);
        PreOrder(t->rChild);
    }
}

/*void InOrder(Node *ptr)
{
    if([ptr==NULL])
    {
        return;
    }
    else
    {
        stack st;
        while(ptr!=NULL || isEmpty(st)!=true)
        {
            if(ptr!=NULL)
            {
                push(&st,ptr);
                ptr=ptr->lchild;
            }
            else
            {
                ptr=pop(&st);
                cout<<ptr->data<<" ";
                ptr=ptr->rchild;
            }
        }
    }
}

void PostOrder(Node *ptr)
{
    
}*/

int main()
{
    
        //Creating New Node for instertion   
               treeNode *temp =new treeNode;
            //Inserting At Root Node;   
               cout<<"Enter the Data For the Root :"<<endl;
               cin>>temp->data;
               temp->lChild=temp->rChild=NULL;
               root=temp;
               //temp=NULL;
               Enqueue(root);

     while(true)
    {
       char ch;
       cout<<"Do you wants to Enter More Data to Your Tree ?(y/n) ";
       cin>>ch;
       if(ch=='y')
       {      
           //Address Find from Queue
              treeNode *ptr=Dequeue();
           //Insertion at LeftChild     
           cout<<"Do wants to enter the Data at Lchild of "<<ptr->data<<" (y/n) : ";
           cin>>ch;
           if(ch=='y')
           {
               temp=new treeNode;
               cout<<"Enter the Data for LChild of "<<ptr->data<<" :";
               cin>>temp->data;
               ptr->lChild=temp;
               Enqueue(ptr->lChild);
               
           }

           //Insertion at RightChild
           cout<<"Do wants to enter the Data at Rchild of "<<ptr->data<<" (y/n) : ";
           cin>>ch;
           if(ch=='y')
           {
               temp=new treeNode;
               cout<<"Enter the Data for RChild of "<<ptr->data<<" :";
               cin>>temp->data;
               ptr->rChild=temp;
               Enqueue(ptr->rChild);
           }
       }
       else
       {
           cout<<"Your Tree is Completed !!"<<endl;
           break;
       }         
    
    }

    cout<<"PreOrder :"; 
    PreOrder(root);

}