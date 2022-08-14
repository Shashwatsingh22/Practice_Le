//https://www.codechef.com/AUG221D/problems/TWOTRAINS
#include <iostream>
using namespace std;


int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	    int N=0;
	    cin>>N;
	    
	    int A[N]={0},B[N]={0};
	    
	    int difference=0;
	    int minTime = 0;
	    int i=0;
	    
	    for(i=1;i<N;i++)
	    {
	        cin>>A[i];
	        minTime+=A[i];
	        B[i]=A[i];
	        A[i]=minTime;
	    }
	    
	    for(i=0;i<N-1;i++)
	    {
	        difference=A[i+1]-B[i];
	        if(difference>0)
	        {
	                B[i+1]+=B[i]+difference;
	        }
	        else
	        {
	                B[i+1]+=B[i];
	        }
	    }
	    cout<<B[i]<<endl;
	}
	
	return 0;
}
