#include<iostream>
using namespace std;

int main()
{
    int A[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    int i=0;
    int j=sizeof(A)/sizeof(A[0])-1;

   //out<<j;
    
    while(i<=j)
    {
        if((A[i]<0)&&(A[j]<0))
        {
            i+=1;
        }
        
        else if(A[i]>0 && A[j]<0)
        {
          swap(A[i],A[j]);
          i+=1;
          j-=1;
        }
        
        else if (A[i]>0 &&  A[j]>0)
        {
            j-=1;
        }
        else
        {
            j--;
            i++;
        }
       
    }
    for(int i=0;i<9;i++)
    {
        cout<<A[i]<<" ";
    }
}