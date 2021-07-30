#include<iostream>
using namespace std;

void Insert(int A[],int index)
{
    int var = A[index];
    int i=index;

    while(var>A[i/2] && i>1)
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=var;

    
}

int main()
{
    int A[]={0,30,20,10,15,12,35};
    Insert(A,6);
    
    for(int i=1;i<=6;i++)
    {
        cout<<A[i]<<" ";
    }
}