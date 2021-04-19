#include<iostream>
using namespace std;

void Selection_Sort(int A[],int n)
{
  for(int i=0;i<n;i++)
  {
    int k=i;
    for(int j=i;j<n;j++)
    {
      if(A[j]<A[k])
      {
          k=j;
      }
    }
    swap(A[i],A[k]);
  }
  
}


int main()
{
   int Arr[5] = { 8  , 4 , 6 , 2 , 5};

   Selection_Sort(Arr,5);
   
   for(int i=0;i<5;i++)
    cout<<Arr[i]<<" ";
}