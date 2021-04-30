#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int changeToInt(string A)
{
	int place=1;
	int num=0;
	for(int i=A.length()-1;i>=0;i--)
	{
		num+=(A[i]-'0')*place;
		place*=10;
	}
	return num;
}


bool compare(string A,string B)
{
    int numA=changeToInt(A+B);
	int numB=changeToInt(B+A);
	cout<<numA<<" "<<numB<<endl;
	return numA<numB;
}

int main() {
	int n;
	cin>>n;

	while(n--)
	{
		int size;
		cin>>size;
		string A[size];
		for(int i=0;i<size;i++)
		{
			cin>>A[i];
		}
		sort(A,A+size,compare);
		for(int i=0;i<size;i++)
		{
		cout<<A[i]<<" ";
		}
	}

	return 0;
}