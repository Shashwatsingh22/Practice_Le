#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int soln(int A[],int n)
{
	int ans=0;
	int left[n]={0},right[n]={0};

	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			left[i]=A[i];
		}
		else
		{
			if(left[i-1]<A[i])
			{
				left[i]=A[i];
			}
			else
			{
				left[i]=left[i-1];
			}
		}
	}

	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			right[i]=A[i];
		}
		else
		{
			if(right[i+1]<A[i])
			{
				right[i]=A[i];
			}
			else
			{
				right[i]=right[i+1];
			}
		}
	}

	int i=0;
	while(i<n)
	{
		ans+=min(left[i],right[i])-A[i];
		i++;
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