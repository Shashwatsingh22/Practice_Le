#include<iostream>
using namespace std;
 
int main()
{
    long long m,n,a,TotalNumSqr,side1,side2;
    cin>>m>>n>>a;
    
    side1= m%a==0 ? m/a : (m/a)+1;
    
    side2= n%a==0 ? n/a : (n/a)+1;
    
    TotalNumSqr=side2*side1;
    
    cout<<TotalNumSqr;
    
}