#include <iostream>
#include <vector>
using namespace std;



void rotate_by_second_array_left(int A[],int k ,int n)
{
  if(k==1)
  {
    int temp=A[0];
    for(int i=0;i<n;i++)
    {
      A[i]=A[i+1];
    }
    A[n-1]=temp;
  }
  else
  {
    int B[k]={0};
    int j=0;
    for(int i=0;i<k;i++)
    {
      B[j]=A[i];
      j++;
      cout<<B[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        A[i]=A[i+k];
    }

    j=0;
    int i=n-k;
    while(i<n)
    {
        A[i]=B[j];
        i++;
        j++;
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
   int A[]={1,2,3,4,5,6};
   int k;
   cout<<"Enter the times of the Rotation :";
   cin>>k;
   int n=sizeof(A)/sizeof(A[0]);
   Display(A,n);
   rotate_by_second_array_left(A,k,n);
   Display(A,n);
}