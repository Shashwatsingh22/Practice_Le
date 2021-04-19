#include <iostream>
#include <vector>
#include<climits>
using namespace std;


class Stack
{
    public:
    int data;
    Stack *next;
};

Stack *top=NULL;

void push(int data)
{      
    Stack *temp=new Stack;
    temp->data=data;
    temp->next=NULL;
    
    if(top==NULL)
    {
     top=temp;
    }
    else
    {
      temp->next=top;
      top=temp;
    }
}

void pop()
{
    if(top==NULL)
    {
        cout<<"Underflow";
    }
    else
    {
        Stack *ptr=top;
        top=top->next;
        delete(ptr);
    }
}

int max(Stack *ptr)
{
   int max=INT_MIN;
   
   while(ptr)
   {
       if(ptr->data>max)
       {
           max=ptr->data;
       }
       ptr=ptr->next;
   }
   return max;
}

int main()
{
   int size;
   cin>>size;
   while(size--)
   {
       
       int choice;
       cin>>choice;
       if(choice==1)
       {
         int ele;
         cin>>ele;
         push(ele);  
       }
       else if(choice==2)
       {
           pop();
       }
       else {
         cout<<max(top);  
       }
   }
}