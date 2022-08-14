//https://www.codechef.com/AUG221D/problems/HLEQN

#include <bits/stdc++.h>
using namespace std;

string solve(int X)
{
    for(int i=1;i<=sqrt(X);i++) 
    {
        if((X-2*i)%(i+2)==0 && X!=2*i) return "YES";
    }
    return "NO";
    
}

int main() {
        int t=0;
        cin>>t;
        
        while(t--)
        {
           int X=0;
           cin>>X;
           if(X<=2) cout<<"NO"<<endl;
           else
           cout<<solve(X)<<endl;
        }
	return 0;
}
