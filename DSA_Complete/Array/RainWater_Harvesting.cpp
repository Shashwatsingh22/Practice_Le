#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int soln(int A[],int n)
{
	int ans=0;
    
	for(int i=1;i<n-1;i++)
	{
		int lmax=A[i];

		for(int j=i;j>=0;j--)
		{
			if(lmax < A[j])
			{
              lmax=A[j];
			}
		}
		
		int rmax=A[i];
		for(int j=n-1;j>=i;j--)
		{
            if(rmax < A[j])
			{
				rmax=A[j];
			}
		}

		ans+=min(lmax,rmax)-A[i];
		
	}
    
	return ans;
}

int main() {
	int num;
	cin>>num;
    int A[num];
	for(int i=0;i<num;i++)
	{
		cin>>A[i];
	}

    cout<<soln(A,num);

	return 0;
}