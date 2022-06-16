#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> temp)
{
     while(!temp.empty())
     {
          cout<<temp.top()<<" ";
          temp.pop();
     }
     cout<<endl;
}

void insert(stack<int> &st, int temp)
{
    if(st.size()==0 || st.top()<=temp)
    {
        st.push(temp);
        return;
    }
    
    int val = st.top();
    st.pop();
    insert(st,val);
    st.push(temp);
    
}

void sortStack(stack<int> &st)
{
    if(st.size()==1) return;
    
    int temp = st.top();
    st.pop();
    sortStack(st);
    insert(st,temp);
}

int main()
{
     stack<int> st;
     
     int size=0;
     cin>>size;
     for(int i=0;i<size;i++)
     {
          int data=0;
          cin>>data;
          st.push(data);
     }
     
     cout<<"Without Sorting => ";
     printStack(st);
     
     sortStack(st);
     cout<<"After Sort => ";
     printStack(st);
     
}