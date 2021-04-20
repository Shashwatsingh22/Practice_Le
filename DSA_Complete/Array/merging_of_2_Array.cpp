#include<iostream>
using namespace std;

void merge(int A[],int n,int B[],int n1,int C[])
{
    int i=0,j=0,k=0;
    while(i<n  && j<n1)
    {
        if(A[i]==B[j])
        {
           C[k++]=A[i++];
           j++;    
        }
        else if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }
    if(i<n)
    {
        for(;i<n;i++)
        {
            C[k++]=A[i];
        }
    }
    else
    {
        for(;j<n1;j++)
        {
            C[k++]=B[j];
        }
    }

}

void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[]={2,4,6,8,10,12,14,16,18,20};
    int B[]={3,6,9,12,15,18,21,24,27,30};
    int n=sizeof(A)/sizeof(A[0]);
    int n1=sizeof(B)/sizeof(B[0]);
    int C[n+n1]={0};
    
    cout<<"A :";
    Display(A,n);
    cout<<"B :";
    Display(B,n1);

    cout<<"C :";
    merge(A,n,B,n1,C);
    Display(C,n+n1);
}