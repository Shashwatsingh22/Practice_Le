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

bool isEmptyQueue()
{
    return first==NULL;
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

void PreOrder(treeNode *ptr)
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
                cout<<ptr->data<<" ";
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
    cout<<endl;
}

void InOrder(treeNode *t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        while(t!=NULL || isEmptyStack()!=true)
        {
            if(t!=NULL)
            {
                push(t);
                t=t->lChild;
            }
            else
            {
                t=pop();
                cout<<t->data<<" ";
                t=t->rChild;
            }
        }
    }
    cout<<endl;
}

/*void PostOrder(treeNode *t)
{
    int convert;
    if(t==NULL)
    {
        return;
    }
    else
    {
        while(t!=NULL || isEmptyStack())
        {
            if(t!=NULL)
            {
                convert=(int)t;
                push(-1*convert);
                t=t->lChild;
            }
            else
            {
               convert=pop();
               if(convert<0)
               {
                   push(-1*convert);
                   t=(treeNode)convert;
               }
               else
               {

               }
            }
        }
    }
}*/

void LevelOrder(treeNode *t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        
        cout<<t->data<<" ";
        Enqueue(t);

        while(isEmptyQueue()!=true)
        {
            t=Dequeue();
            
            if(t->lChild!=NULL)
            {
                cout<<t->lChild->data<<" ";
                Enqueue(t->lChild);
            }
            if(t->rChild!=NULL)
            {
                cout<<t->rChild->data<<" ";
                Enqueue(t->rChild);
            }
        }
    }
}

int CountNode(treeNode *t)
{
    int x,y;
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        x=CountNode(t->lChild);
        y=CountNode(t->rChild);
        return x+y+1;
    }
}



int CountNodeWhoseDeg2(treeNode *t)
{
    int x,y;

    if(t==NULL)
    {
        return 0;
    }
    else
    {
        x=CountNodeWhoseDeg2(t->lChild);
        y=CountNodeWhoseDeg2(t->rChild);

        if(t->lChild!=NULL && t->rChild!=NULL)
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
        
    }
}

int Deg1ANDDeg2(treeNode *t)
{
    int x,y;

    if(t==NULL)
    {
        return 0;
    }
    
    else
    {
      x=Deg1ANDDeg2(t->lChild);
      y=Deg1ANDDeg2(t->rChild);

      if(t->lChild!=NULL || t->rChild!=NULL)
      {
          return x+y+1;
      }
      else
      {
          return x+y;
      }
    }
}

int Deg0(treeNode *t)
{
    int x,y;

    if(t==NULL)
    {
        return 0;
    }
    
    else
    {
      x=Deg0(t->lChild);
      y=Deg0(t->rChild);

      if(t->lChild==NULL && t->rChild==NULL)
      {
          return x+y+1;
      }
      else
      {
          return x+y;
      }
    }
}

int Deg1(treeNode *t)
{
   int x,y;
    if(t==NULL)
    {
        return 0;
    }
    
    else
    {
      x=Deg1(t->lChild);
      y=Deg1(t->rChild);

      if((t->lChild!=NULL && t->rChild==NULL) || (t->lChild==NULL && t->rChild!=NULL))
      {
          return x+y+1;
      }
      else
      {
          return x+y;
      }
    }
}

int main()
{
    char ch;
    while(true)
    {   
        cout<<"Do You wants to Enter the More in Tree  (y/n): ";
        cin>>ch;
        if(ch=='y')
        {
            if(root==NULL)
            {
                treeNode *t=new treeNode;
                cout<<"Enter the Root Node :";
                cin>>t->data;
                t->lChild=t->rChild=NULL;
                root=t;
                Enqueue(t);
            }
            else
            {
                treeNode *temp = Dequeue();
            
                cout<<"Do You Wants to Enter the Data At the Left Side of "<<temp->data<<" (y/n)";
                cin>>ch;
            
                if(ch=='y')
                {
                treeNode *node = new treeNode;
                cout<<"Enter the Data For the Left Side : of("<<temp->data<<") ";
                cin>>node->data;
                node->lChild=node->rChild=NULL;
                temp->lChild=node;
                Enqueue(node);
                }

                cout<<"Do You Wants to Enter the Data At the Right Side of "<<temp->data<<" (y/n)";
                cin>>ch;
                
                if(ch=='y')
                {
                    treeNode *node = new treeNode;
                    cout<<"Enter the Right Side Data : of ( "<<temp->data<<") ";
                    cin>>node->data;
                    node->lChild=node->rChild=NULL;
                    temp->rChild=node;
                    Enqueue(node);
                } 
            }
        }
        else
        {
            break;
        }
    }
   
    cout<<endl;
      cout<<"PreOrder : ";
      PreOrder(root); 

      cout<<"InOrder : ";
      InOrder(root);
      
      //cout<<" PostOrder : ";
      //PostOrder(root);
      
      cout<<" LevelOrder : ";
      LevelOrder(root);

      cout<<"CountNode : "<< CountNode(root)<<endl;
       
      cout<<"Deg2 : "<<CountNodeWhoseDeg2(root)<<endl;
      cout<<"Deg1 : "<<Deg1(root)<<endl;
      cout<<"Deg1&&Deg2 : "<<Deg1ANDDeg2(root)<<endl;
      cout<<"Deg0 : "<<Deg0(root)<<endl; 
      //cout<<"CountNode1 : "<<  CountNode1(root)<<endl;
      
}