#include<iostream>
using namespace std;

class stack
{
    public:
    int top;
    int size;
    int *A;
};

int isEmpty()
{

}

int isFull()
{

}

int peek()
{

}

void push(int data)
{

}

int pop()
{

}

int main()
{
   stack st;
   cout<<"Enter the Lenght Of your Stack : ";
   cin>>st.size;
   st.top=-1;
   st.A =new int[st.size];
   
   cout<<"Choice Your Operatations : ";
   while(true)
   {
    cout<<"1. Insert \n"<<"2. Deletion \n"<<" ";
   }
}