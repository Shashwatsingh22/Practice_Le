#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void take_input_array(int a[],int n)
{
   cout<<"Enter the Elements :";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
}

int  wants_subarrays_sum(int A[],int n)
{
    int MaxSum=INT_MIN;
    int left=-1,right=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
          int sum=0;
            for(int k=i;k<j;k++)
            {
               sum+=A[k];
            }
            if(MaxSum<sum)
            {
                MaxSum=sum;
                left=i;
                right=j;
            }

        }
    }
    for(int i=left;i<right;i++)
    {
      cout<<A[i]<<" ";
    }
    cout<<endl;
    return MaxSum;
}

int main()
{
    int size;
    cout<<"Enter the Size of the Array: ";
    cin>>size;
    int A[size];
    take_input_array(A,size);
    
    cout<<"Max sum is : "<<wants_subarrays_sum(A,size);
}