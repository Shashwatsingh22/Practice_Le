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
      if(mid*mid<=n)
      {
        if(ans==mid)
        {
            flag--;
            if(flag)
            {
                break;
            }
        }  
        ans=mid;
        first=mid;   
      }
      else if(mid*mid>n)
      {
          last=mid;
      }
      else
      {
         first=mid;
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