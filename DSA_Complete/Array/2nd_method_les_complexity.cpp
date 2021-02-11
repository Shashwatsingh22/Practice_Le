//We Need find the max sum of subarray by the 2nd Method i.e By cumulative Sum. It is Done in O(n^2) only...
#include<iostream>
#include<climits>
using namespace std;

int main()
{
   int size;
   cout<<"Enter the Size for the Array :";
   cin>>size;
   int A[size]={0};


   cout<<"Enter the Elements :"<<endl;
   int  CumSum[size]={0};
   cin>>A[0];
   CumSum[0]=A[0];

   for(int i=1;i<size;i++)
   {
       cin>>A[i];
       CumSum[i] = CumSum[i] + A[i-1];
   }

   int left = -1;
   int right = -1;
   int MaxSum = INT_MIN;

   for(int i=0;i<size;i++)
   {
       for(int j=i;j<size;j++)
       {
           int CurrentSum=0;
           CurrentSum = CumSum[j] - CumSum[i-1];
           if(CurrentSum>MaxSum)
           {
               MaxSum=CurrentSum;
               left=i;
               right=j;
          }
       }
   }

   cout<<"Max Sum of Subarray is "<<MaxSum<<endl;
   for(int i=left;i<=right;i++)
   {
       cout<<A[i]<<" ";
   }

}