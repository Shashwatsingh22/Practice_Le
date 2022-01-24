#include<iostream>
#include<stack>

using namespace std;

void Display(stack<int> st)
{
   while(!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);

    cout<<st.size()<<endl;
    Display(st);
   
}