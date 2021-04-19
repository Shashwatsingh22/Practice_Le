#include<iostream>
using namespace std;

int main()
{
    int test,count=0;
    cin>>test;
    while(test--)
    {  
        int m,n,a,d;
        cin>>m>>n>>a>>d;
        for(int i=m;i<=n;i++)
        {
          if( (i%a!=0) && (i%(a+d))!=0 && (i%(a+2*d))!=0 && (i%(a+3*d))!=0 && (i%(a+4*d))!=0 )
          {
              count++;
          }  
        }
    }
    cout<<count;
}