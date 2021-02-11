#include<iostream>
using namespace std;


int main()
{
    int a,b,i=1;
    cin>>a>>b;
    while(true)
    {
      a*=3;
      b*=2;
      if(a>b)
      {
          cout<<i<<endl;
          break;
      }
      i++;
    }
}
