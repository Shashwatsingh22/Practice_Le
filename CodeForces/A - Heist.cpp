#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    long long var, max = INT_MIN, min = INT_MAX;
 
    for(int i=0;i<n;i++)
    {
        cin>>var;
        if(var>max)
        {
          max = var;
        }
        if(var<min)
        {
         min = var;
         }
    }
    cout<<((max-min)-n)+1;
}