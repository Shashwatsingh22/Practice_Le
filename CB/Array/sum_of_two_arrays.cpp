#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void soln(int A[],int n,int B[],int m)
{
	 vector<int> v;
     int i=n-1,j=m-1;
     int sum=0;
	 int hasil=0;
	 
	 while(i>=0 && j>=0)
	 {
		 sum=A[i]+B[j]+hasil;
	     hasil=sum/10;
		 sum%=10;
		 v.push_back(sum);
		 i--;
		 j--;
	 } 
	
	for(;i>=0;i--)
	{
		sum=A[i]+hasil;
		hasil=sum/10;
		sum%=10;
		v.push_back(sum);
	}
    
	for(;j>=0;j--)
	{
		sum=B[j]+hasil;
		hasil=sum/10;
		sum%=10;
		v.push_back(sum);
	}

	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<", ";
	}
	cout<<"END";
}

int main() {

	int n=0,m=0;
	cin>>n;
	int A[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
    
	cin>>m;
	int B[m]={0};
    for(int i=0;i<m;i++)
	{
		cin>>B[i];
	}

	soln(A,n,B,m);
	return 0;
}