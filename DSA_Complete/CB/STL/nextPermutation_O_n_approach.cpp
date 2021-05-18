#include<iostream>
#include<algorithm>
using namespace std;

void Display(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void next_permutation1(int arr[],int n)
{
	int index1=-1;
	int index2=-1;

//Breaking Point
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]<arr[i+1])
		{
          index1=i;
		  break;
		}
	}
	if(index1<0)
	{
		reverse(arr,arr+n);
	}

//Less Num
   else
   {
    for(int i=n-1;i>index1;i--)
	{
		if(arr[index1]<arr[i])
		{
			index2=i;
			break;
		}
	}
		swap(arr[index1],arr[index2]);
		reverse(arr+index1+1,arr+n);
   }
}

int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int s;
		cin>>s;
		int arr[s]={0};
		for(int i=0;i<s;i++)
		{
			cin>>arr[i];
		}

		next_permutation1(arr,s);
		Display(arr,s);
	}
	return 0;
}