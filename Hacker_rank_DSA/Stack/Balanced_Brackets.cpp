#include <bits/stdc++.h>
using namespace std;


class Stack
{
    public:
    int size;
    int top;
    int *A;
};


void push(Stack *st,char d)
{
    if(st->size-1==st->top)
    {
        cout<<"OverFlow";
    }
    else
    {
        st->top++;
        st->A[st->top]=d;
    }
}

int isEmpty(Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char pop(Stack *st)
{
    char x='N';
    if(st->top==-1)
    {
      return x;    
    }
    else
    {
        x=st->A[st->top];
        st->top--;
    }
    return x;
}
  

// Complete the isBalanced function below.
string isBalanced(string s) {
    
  Stack st;
  st.size=s.length();
  st.top=-1;
  st.A=new int[st.size];
  
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='{' || s[i]== '[' || s[i]== '(')
    {
        push(&st,s[i]);
    }
    else {
      char c=pop(&st);
      if(c=='{' && s[i]!='}')
      {
          return "NO";
      }
      if(c=='[' && s[i]!=']')
      {
          return "NO";
      }
      if(c=='(' && s[i]!=')')
      {
          return "NO";
      }    
    }
  }
  
  if(isEmpty(st)==1)
  {
      return "YES";
  }
  else {
    return "NO";
  }
}

int main()
{
   int size;
   cin>>size;
   while(size--)
   {
       string eqn;
       cin>>eqn;
       cout<<isBalanced(eqn)<<endl;
   }
}