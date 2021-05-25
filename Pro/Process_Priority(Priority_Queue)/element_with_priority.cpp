/* ---THREE PRIORITY QUEUES--- */
#include<iostream>
using namespace std;

class Node
{
    public:
    char process;
    int priority;
    Node *next;
    
};

Node *f1=NULL,*r1=NULL;
Node *f2=NULL,*r2=NULL;
Node *f3=NULL,*r3=NULL;

void enqueue(char pname,int pri)
{
    Node *temp=new Node();
    if(temp==NULL)
    {
        cout<<"Overflow!"<<endl;
    }
    else
    {
        temp->process=pname;
        temp->priority=pri;
        temp->next=NULL;
        
        switch (pri)
        {
        case 1:
            {
                if(f1==NULL)
                {
                    f1=r1=temp;
                }
                else
                {
                    r1->next=temp;
                    r1=temp;
                }
            }
            break;
        
        case 2:
            {
                if(f2==NULL)
                {
                    f2=r2=temp;
                }
                else
                {
                    r2->next=temp;
                    r2=temp;
                }
            }
            break;

        case 3:
            {
                if(f3==NULL)
                {
                    f3=r3=temp;
                }
                else
                {
                    r3->next=temp;
                    r3=temp;
                }
            }
            break;

        default:
            break;
        }
    }
}

Node *dequeue(Node *ptr)
{
   Node *qtr=ptr;
   ptr=ptr->next;
   cout<<qtr->process<<" is Executed"<<endl;
   delete(qtr);
   
   return ptr; 
}

int main()
{
   Node *Q1,*Q2,*Q3;
   
   while(true)
   {
     char choice;
     cout<<"Do You Want To Run the Process ?(Y/n)";
     cin>>choice;

     if(choice=='Y')
     {
        char p;
        int pri;
        cout<<"Enter the Process Name:"<<endl;
        cin>>p;
        cout<<"Enter the Priority of "<<p<<" :"<<endl;
        cin>>pri;

        switch(pri)
        {
        case 1:
            {
             cout<<pri<<endl;
             enqueue(p,pri);
            }
            break;
        case 2:
            enqueue(p,pri);
            break;
        case 3:
            enqueue(p,pri);
            break;
        
        default:
            cout<<"Unsupported Priority"<<endl;
            break;
        }
     }
     else
     {
         break;
     }   
   }

  cout<<"Execution Under Process : "<<endl;
  while(f1!=NULL)
  {
    f1=dequeue(f1);
  }
  while(f2!=NULL)
  {
    f2=dequeue(f2);
  }
  while(f3!=NULL)
  {
    f3=dequeue(f3);
  }
  cout<<"Execution Completed!"<<endl;
}