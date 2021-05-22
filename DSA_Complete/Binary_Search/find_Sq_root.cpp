#include<iostream>
using namespace std;

int findSqRoot(int n)
{
    int first=0;
    int last=n;
    
    int ans=0;
    int flag=1;
    while(first<=last)
    {
      int mid=(first+last)/2;
      if(mid*mid==n)
      {
          return mid;
      }
      if(mid*mid<n)
      {  
        ans=mid;
        first=mid+1;   
      }
      else if(mid*mid>n)
      {
          last=mid-1;
      }
      else
      {
         first=mid+1;
      }
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<findSqRoot(num);
}