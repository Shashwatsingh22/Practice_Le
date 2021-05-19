#include<iostream>
#include<algorithm>
using namespace std;

int binary_search1(pair<int,int> A[],int f,int l,int k)
{
    while(f<=l)
    {
        int mid=(f+l)/2;
        if(A[mid].second==k)
        {
            return mid;
        }
        else if(A[mid].second<k)
        {
            f=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }

    return -1;
}

int main() {
	int n;
	cin>>n;
	pair<int,int> A[n];
	for(int i=0;i<n;i++)
	{
        A[i].first=i;
		cin>>A[i].second;
	}
	
    int key;
	cin>>key;
    	
    int rot=-1; 
	for(int i=n-2;i>0;i--)
	{
		if(A[i].second>A[i+1].second)
		{
          rot=i;
		  break;
		}
	}

    if(rot>=0)
	{
		rotate(A,A+rot,A+n);
		int index=binary_search1(A,0,n-1,key);
        if(index >= 0)
        {
        cout<<A[index].first<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
	}
	else
	{
      int index=binary_search1(A,0,n-1,key);
        if(index >= 0)
        {
        cout<<A[index].first<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
	}
    return 0;
}