#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
	return a<b;
}

void soln(int A[],int n,int ele)
{
	
	sort(A,A+n,compare);
    
	for(int i=0;i<n;i++)
	{
		int mid=i+1,last=n-1;
		while(mid<last)
		{
			if(A[i]+A[mid]+A[last]==ele)
			{
				cout<<A[i]<<", "<<A[mid]<<" and "<<A[last]<<endl;
				mid++;
				last--;
			}
			else if(A[i]+A[mid]+A[last]>ele)
			{
				last--;
			}
			else
			{
				mid++;
			}
		}
	}
	return;
}

int main() {
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int key;
	cin>>key;
	soln(A,n,key);

	return 0;
}