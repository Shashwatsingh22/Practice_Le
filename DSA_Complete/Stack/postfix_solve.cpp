#include<iostream>
#include<string>
using namespace std;

class stack
{
    public:
    int top;
    int size;
    int *A;
};

int isEmpty(stack temp)
{
  if(temp.top==-1)
  {
      return 1;
  }
  return 0;
}

int isFull(stack temp)
{
   if(temp.top==temp.size-1)
   {
       return 1;
   }
   return 0;
}

char topElement(stack st)
{
    return st.A[st.top];
}

void push(stack *temp,char d)
{
   if(temp->top==temp->size-1)
   {
      cout<<"Stack OverFlow"<<endl;
      return;
   }
   else
   {
       temp->top++;
       temp->A[temp->top]=d;
       return;
   }
}

char pop(stack *temp)
{
    if(temp->top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
      char x;
      x=temp->A[temp->top];
      temp->top--;
      return x;
    }
}


int  SolvePostfix(stack stk,string st)
{
  for(int i=0;i<st.length();i++)
  {
     if(st[i]!='*' && st[i]!='/' && st[i]!='+' && st[i]!='-')
     {
         push(&stk,st[i]-'0');
     }
     else
     {
         switch (st[i])
         {
         case '*':
             {
                 int right=pop(&stk);
                 int left=pop(&stk);
                 int result=left*right;
                 push(&stk,result);
             }
             break;

        case '+':
             {
                 int right=pop(&stk);
                 int left=pop(&stk);
                 int result=left+right;
                 push(&stk,result);
             }
             break;

        case '-':
             {
                 int right=pop(&stk);
                 int left=pop(&stk);
                 int result=left-right;
                 push(&stk,result);
             }
             break;

        case '/':
             {
                 int right=pop(&stk);
                 int left=pop(&stk);
                 int result=left/right;
                 push(&stk,result);
             }
             break;               

         default:
             break;
         }

     }
  }

  return pop(&stk);
}

int main()
{
    string st;
    cin>>st;
    stack stk;
    stk.top=-1;
    stk.size=st.length();
    stk.A = new int(stk.size);
    
    cout<<SolvePostfix(stk,st);
}