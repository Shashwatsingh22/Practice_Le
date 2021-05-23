#include<iostream>
using namespace std;

float findSqRoot(int n,int placeValue)
{
    int first=0;
    int last=n;
    
    float ans=0;
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
    
    //Now Here If we Wants to Return the the Value in form of the Floating point then
    //Then We can here use the bruteforce approch 10==> 3.162 ==> then 1> 3.1^2<=10 2> 3.16^2<=10
    
    float st=0.1;
    for(int i=0;i<placeValue;i++)
    {
        while(ans*ans<=n)
        {
            ans+=st;
        }
        ans-=st;
        st/=10;
    }
   
    return ans;

}

int main()
{
    int num,placeV;
    cin>>num;
    cin>>placeV;
    cout<<findSqRoot(num,placeV);
}